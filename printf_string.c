#include "main.h"

/**
 * print_string - print inpuit as string
 * @args: argument to print
 * Return:void
 */
int print_string(va_list args)
{
	char *ch;
	int len=0;

	ch = va_arg(args, char *);
	if (ch == NULL)
		ch = "(null)";

	while (*ch != '\0')
	{
		_putchar((unsigned char) *ch);
		ch++;
		len++;
	}
	return (len);

}