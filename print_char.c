#include "printfheader.h"

/**
 * print_char - print input char
 * @args:argument to print
 * Return:number of printed argument (in this case 1)
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
