#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>


/**
 * struct format - Struct for format
 * @spc: Struct format
 * @fun: The function associated
 */

typedef struct format
{
	char *spc;
	int (*fun)(va_list);
} format_t;



int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_mod(va_list args);
int print_string(va_list args);

#endif
