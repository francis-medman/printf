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
	/*args is declared but wont be used hence the unused attrb*/
	_putchar('%');
	return (1);
}
