#include "main.h"
/**
 * select_f - function that selects function based on format specifier
 * @format: input with specifiers
 * @format_list:  struct with specifier and function
 * @args: input arguments
 * Return: character count
*/
int select_f(const char *format, specifier_funct format_list[], va_list args)
{
	int s_func;
	int i, s, num_char;

	num_char = 0;

	for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%')
	{
		for (s = 0; format_list[s].specifier != NULL; s++)
		{
			if (format[i + 1] == format_list[s].specifier[0])
			{
				s_func = format_list[s].funct(args);
				num_char = num_char + s_func;
				break;
			}
		}
		if (format_list[s].specifier == NULL && format[i + 1] != ' ')
		{
			if (format[i + 1] != '\0')
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				num_char = num_char + 2;
			}
			else
			{
				return (-1);
			}
		}
		i = i + 1;
	}
	else
	{
		_putchar(format[i]);
		num_char++;
	}
}
return (num_char);
}
