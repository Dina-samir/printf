#include "main.h"

/**
 * print_string - print argument as string
 * @args: argument to print
 * 
 * Return: number of printed argument
 */
int print_string(va_list args)
{
	char *ch;
	int length = 0;

	ch = va_arg(args, char *);
	if (ch == NULL)
	{
	    ch = "(null)";
	}
	while (*ch != '\0')
	{
		_putchar((unsigned char) *ch);
		ch++, length++;
	}
	return (length);
}
