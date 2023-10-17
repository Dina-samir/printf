#include "main.h"

/**
 * printf_char - prints a char.
 * @args: argument to print.
 * Return: 1.
 */
int printf_char(va_list args)
{
	char ch;
	ch = va_arg(args, int);
	_putchar(ch);
	return (1);
}
