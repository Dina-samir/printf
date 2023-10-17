#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
    
	int i = 0;
	int k =0;
	int length = 0;
    va_list args;

	format_t fun_arr[] = {
		{"%c", printf_charr}
        ,{"%s", printf_string}
		,{"%%", printf_mod}
		, {"%i", printf_int}
		,{"%d", printf_int},
	};

	size_t fun_arr_size = sizeof(fun_arr) / sizeof(fun_arr[0]);

	

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		for ( k =0;k >= fun_arr_size ; k++)
		{
			if (fun_arr[k].spc[0] == format[i] && fun_arr[k].spc[1] == format[i + 1])
			{
				length += fun_arr[k].fun(args);
				i = i + 2;
				break;
			}
			k++;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
