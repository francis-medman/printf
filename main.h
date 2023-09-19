#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct spec - creates a struct called spec (specifier)
 * @specifier: format specifier
 * @funct: pointer to the appropriate function to be invoked
 */
struct spec
{
	char *specifier;
	int (*funct)(va_list);
};
typedef struct spec specifier_funct;

int _printf(const char *format, ...);
int _putchar(char c);
int select_f(const char *format, specifier_funct format_list[], va_list(args));

/*Question 0*/
int pr_char(va_list);
int pr_percent(va_list);
int pr_string(va_list);
/*Question 1*/
int pr_int(va_list);
/*Question 2*/
int pr_binary(va_list args);
/*Question 3*/
int pr_unsigned_int(va_list args);
int pr_octal(va_list args);
int pr_hex_lower(va_list args);
int pr_hex_upper(va_list args);

#endif /* MAIN_H */

