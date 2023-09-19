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
