#include "main.h"

/**
* print_op - checks for which specifier to print
* @format: strings to be passed
* @struct_arr: array of structures
* @list: list of arguments
*
* Return: the character to be printed
*/
int print_op(const char *format, form_spec *struct_arr, va_list list)
{
	char a;
	int count = 0, b = 0, c = 0;

	a = format[b];
	while (a != '\0')
	{
		if (a == '%')
		{
			c = 0;
			b++;
			a = format[b];
			while (struct_arr[c].type != NULL &&
				a != *(struct_arr[c].type))
				c++;
			if (struct_arr[c].type != NULL)
				count = count + struct_arr[c].f(list);
			else
			{
				if (a == '\0')
					return (-1);
				if (a != '%')
					count += _putchar('%');
				count += _putchar(a);
			}
		}
		else
			count += _putchar(a);
		b++;
		a = format[b];
	}
	return (count);
}
