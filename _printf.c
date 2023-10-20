#include "main.h"
/**
 * _printf - print f function
 * @format: format of input to be printed
 * Return: number of printed chars and digits
 */
int _printf(const char *format, ...)
{
	int i = 0, length = 0, matcher, k;
    va_list args;
	format_t fun_arr[] = {{'c', print_char}, {'s', print_string}, {'%', print_mod}, {'i', print_int}, {'d', print_int}};
    int fun_arr_size = sizeof(fun_arr) / sizeof(fun_arr[0]);
	va_start(args, format);
	if ((!format) || (format[0] == '%' && !format[1]))
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			matcher = 0;
			for (k =0; k <= fun_arr_size; k++)
			{
				if (fun_arr[k].spc == format[i + 1])
				{
					length += fun_arr[k].f(args);
					i += 2;
					matcher=1;
					break;
				}
        	}
			if (matcher == 0)
			{
				_putchar('%');
				_putchar(format[i + 1]);
				i += 2, length += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			i++, length++;
		}
	}
	va_end(args);
	return (length);
}
