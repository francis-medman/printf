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
	{"d", pr_int},
	{"i", pr_int},
	{"u", pr_unsigned_int},
	{"o", pr_octal},
	{"x", pr_hex_lower},
	{"X", pr_hex_upper},
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
