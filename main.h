#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct format - match the specifiers for printf
 * @spc: char pointer of the specifier
 * @fun: pointer to the function that convert specifier
 *
 */

typedef struct format
{
	char *spc;
	int (*fun)(va_list);
} format_t;


int _strlen(char *s);
int _putchar(char c);
int printf_char(va_list args);
int printf_string(va_list args);
int printf_mod(va_list args);
int printf_int(va_list args);
int _printf(const char *format, ...);
#endif
