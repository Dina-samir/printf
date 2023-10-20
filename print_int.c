#include "main.h"
/**
 * printf_int - prints integer
 * @args: argument
 * Return: number of printed argument
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int number, digit ;
	int  i = 1, exp = 1;
    int lst = n % 10;
	n = n / 10;
	number = n;
	if (lst < 0)
	{
	    i++;
		number = -number;
		n = -n;
		lst = -lst;
		_putchar('-');
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			number = number / 10;
			exp = exp * 10;
		}
		number = n;
		while (exp > 0)
		{
		    i++;
			digit = number / exp;
			number = number - (digit * exp);
			exp = exp / 10;
			_putchar(digit + '0');
		}
	}
	_putchar(lst + '0');
	return (i);
}