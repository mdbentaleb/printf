#include "main.h"

/**
* _printf - prints output
* @format: pointer to dat passed
*
* Return: char
*/
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;

	form_spec ops[] = {
		{"c", ch},
		{"s", printstr},
		{"d", print_int},
		{"i", print_longint},
		{"u", unsigned_int},
		{"b", _binary},
		{"R", _rot13},
		{"o", _oct},
		{"x", _hex_l},
		{"X", _hex_u},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(list, format);
	i = print_op(format, ops, list);
	va_end(list);

	return (i);
}
