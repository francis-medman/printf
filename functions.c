#include "main.h"
/**
 * pr_char - prints characters
 * @args: input parameters
 * Return: 1 on success
 */
int pr_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
 * pr_string - prints a string
 * @args: input parameters
 * Return: number of characters in string
 */
int pr_string(va_list args)
{
	int len;
	char *string;

	len = 0;
	string = va_arg(args, char *);
	if (string == NULL)
	{
		string = "(null)"; /*replace null strings with (null)*/
	}
	for (len = 0; string[len] != '\0'; len++)
	{
		_putchar(string[len]);
	}
	return (len);
}
/**
 * pr_percent - prints percent as a format specifier
 * @args: input parameters
 * Return: 1 on success
 */
int pr_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
/**
 * pr_int - prints a decimal number
 * @args: function input arguments
 * Return: length of characters
 */
int pr_int(va_list args)
{
	int n, divisor, length;
	unsigned int num;

	n  = va_arg(args, int);
	divisor = 1;
	length = 0;

	if (n < 0)
	{
		length += _putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	for (; num / divisor > 9;)
	{
		divisor *= 10;
	}
	for (; divisor != 0; )
	{
		length += _putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
	}

	return (length);
}

/**
 * pr_unsigned_int - Handle %u specifier
 * @args: The va_list of arguments
 *
 * Return: The number of characters printed
 */
int pr_unsigned_int(va_list args)
{
	va_arg(args, unsigned int);
	return (0);
}

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
 * pr_binary - Print an unsigned int in binary format
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int pr_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int bit_count = 0;
	unsigned int temp = num;
	int i;
	
	if (num == 0)
	{
		write(1, "0", 1);
		count++;
		return (count);
	}
	
	while (temp > 0)
	{
		temp /= 2;
		bit_count++;
	}

	for (i = bit_count - 1; i >= 0; i--)
	{
		char digit = ((num >> i) & 1) + '0';
		write(1, &digit, 1);
		count++;
	}
	
	return (count);
}
