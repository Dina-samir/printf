#include "main.h"

/**
 * print_binary - prints a binary number.
 * @args: arguments to be print
 * Return:number of printed
 */
int print_binary(va_list args)
{
	int f = 0, count = 0, i, a = 1, b;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			f = 1;
		if (f)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		_putchar('0');
		count++;
	}
	return (count);
}
