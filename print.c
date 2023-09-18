#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: Printed characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);
				putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				if (str == NULL)
					str = "(null)";
				while (*str)
				{
					putchar(*str);
					str++;
					count++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				count++;
			}
		}
		format++;
	}
	va_end(args);
	
	return count;
}
