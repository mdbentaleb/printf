#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct fmt - structure containing
 * @type: the location and method to translate data to characters.
 * @f: print function for specific type.
 *
 * Return: int.
 */

typedef struct fmt
{
	char *type;
	int (*f)();
} form_spec;

int _putchar(char c);
int printstr(va_list pa);
int _printf(const char *format, ...);
int _oct(va_list octo);
int print_int(va_list numbers);
int print_longint(va_list numbers);
int ch(va_list charact);
int print_op(const char *format, form_spec *struct_arr, va_list list);
int _strlen(char *string);
int unsigned_int(va_list number);
int _rot13(va_list rot);
int _binary(va_list num);
int _hex_str(unsigned int n, unsigned int hex, char alpha);
int _hex_l(va_list hexa);
int _hex_u(va_list hexa);
int printDecimal(va_list lista);
int printInteger(va_list lista);

#endif
