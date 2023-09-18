#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

struct spec
{
	char *specifier;
	int (*funct)(va_list);
};
typedef struct spec specifier_funct;

int _printf(const char *format, ...);
int _putchar(char c);

#endif /* MAIN_H */

