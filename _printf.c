
#include "printfheader.h"
int _printf(const char *format, ...)
{
	int  i = 0,length = 0, k;
    va_list args;

	format_t fun_arr[] = {
	    {'c', print_char}, 
	    {'s', print_string},
		{'%', print_mod},
		{'i', print_int},
		{'d', print_int}
	};
	
    size_t fun_arr_size = sizeof(fun_arr) / sizeof(fun_arr[0]);
    
	va_start(args, format);

	if ((!format) || (format[0] == '%' && !format[1]))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			for ( k =0;k <= fun_arr_size ; k++)
			{
    			if (fun_arr[k].spc == format[i + 1])
    			{
    				length += fun_arr[k].f(args);
    		 	    i += 2;
    				break;
    			}
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
