#include "main.h"
/**
 * print_int_helper - ...
 * @n: ...
 * Return: len of number
 */
int get_int_len(int n)
{
	int digit, ncpy, r;
	int i = 0, len = 0, reverse = 0;

	ncpy = n;

	while (ncpy > 0)
	{
		ncpy /= 10;
		len++;
	}
	while (n != 0)
	{
		r = n % 10;
		reverse = reverse * 10 + r;
		n /= 10;
	}
	while (reverse > 0)
	{
		digit = reverse % 10;
		_putchar (digit + '0');
		reverse /= 10;
		i++;
	}
	while (i++ < len)
		_putchar('0');

	return (len);
}

/**
 * handle_int_min -print int min given
 * Return: len of INT_MAX
 */
int handle_int_min(void)
{
	char *my_int_min = "-2147483648";

		while (*my_int_min)
		{
			_putchar(*my_int_min);
			my_int_min++;
		}
		return (11);
}


/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of intgers printed
 */
int print_int(va_list args)
{
	int n, len = 0, isNeg = 0;

	n = va_arg(args, int);
	if (n == INT_MIN)
	{
		len += handle_int_min();
		return (len);
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		isNeg = 1;
	}
	len += get_int_len(n);
	if (isNeg)
		len++;
	return (len);
}
