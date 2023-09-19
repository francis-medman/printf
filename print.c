#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: number  of Printed characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;

	specifier_funct format_list[] = {
	{"c", pr_char},
	{"s", pr_string},
	{"%", pr_percent},
	};
	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);
	count = select_f(format, format_list, args);
	va_end(args);

	return (count);
}
