#include "main.h"

/**
 * print_char - print input as char
 * @args:argument to print
 * Return:len of char
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
