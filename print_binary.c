include "main.h"
/**
 * print_binary - prints a binary number.
 * @args: argument to be printed.
 * Return: number of printed.
 */
int print_binary(va_list args)
{
	int m = 0, int c = 0, a = 1;
	int i,  b;
	unsigned int p;
    unsigned int n = va_arg(args, unsigned int);
	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & n);
		if (p >> (31 - i))
			m = 1;
		if (m != 0)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			c++;
		}
	}
	if (c == 0)
	{
		_putchar('0');
		c++;
	}
	return (c);
}
