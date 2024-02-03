#include "main.h"

/**
 * printstr- print string.
 * @pa: argument list
 *
 * Return: number string for print.
 */

int printstr(va_list pa)
{
	int len;
	char *str;

	str = va_arg(pa, char *);

	if (str == NULL)
		str = "(null)";
	len = 0;

	while (str[len] != '\0')
		len = len + _putchar(str[len]);
	return (len);
}
