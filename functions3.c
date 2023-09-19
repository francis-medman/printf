#include "main.h"

/**
 * pr_octal - Handle %o specifier
 * @args: The va_list of arguments
 *
 * Return: The number of characters printed
 */
int pr_octal(va_list args)
{
	va_arg(args, unsigned int);
	return (0);
}

/**
 * pr_hex_lower - Handle %x specifier (lowercase)
 * @args: The va_list of arguments
 *
 * Return: The number of characters printed
 */
int pr_hex_lower(va_list args)
{
	va_arg(args, unsigned int);
	return (0);
}

/**
 * pr_hex_upper - Handle %X specifier (uppercase)
 * @args: The va_list of arguments
 *
 * Return: The number of characters printed
 */
int pr_hex_upper(va_list args)
{
	va_arg(args, unsigned int);
	return (0);
}

/**
 * pr_unsigned - Handle %u specifier
 * @args: The va_list of arguments
 *
 * Return
 */

int pr_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int length = 0;
	unsigned int divisor = 1;
	
	while (num / divisor > 9)
	{
		divisor *= 10;
	}
	
	while (divisor != 0)
	{
		length += _putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
	}
	
	return length;
}
