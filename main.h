#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * format struct - Struct for format that printf use
 * @spc: printf format
 * @f: function that will implemented on that format
 */

typedef struct format
{
  char spc;
  int (*f) (va_list);
} format_t;

int _strlen (char *s);
int _putchar(char c);
int _printf (const char *format, ...);
int print_char (va_list args);
int print_string (va_list args);
int print_mod (va_list args);
int print_int (va_list args);
#endif
