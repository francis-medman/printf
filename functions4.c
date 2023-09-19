#include "main.h"

/**
 * print_rot13 - Handle %R specifier
 * @args: The va_list of arguments
 *
 * Return: The number of characters printed
 */
int print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;
	
	if (str == NULL)
	{
		count += puts("(nil)");
		return count;
	}
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			char base = (*str >= 'A' && *str <= 'Z') ? 'A' : 'a';
			*str = ((*str - base + 13) % 26) + base;
		}
		
		count += _putchar(*str);
		str++;
	}
	return count;
}
