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

/*Q0*/
int pr_char(va_list);
int pr_percent(va_list);
int pr_string(va_list);
/*Q1*/
int pr_int(va_list);
/*Q2*/
int pr_binary(va_list);
char *_memcpy(char *dest, char *src, unsigned int n);
char *rev_st(char *s);

#endif /* MAIN_H */

