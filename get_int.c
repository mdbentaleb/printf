#include "main.h"

/**
* print_int - function to print integers
* @numbers: list to consider
*
* Return: the integer
*/
int print_int(va_list numbers)
{
	int i, index1 = 0, index2 = 1;
	unsigned int n;

	i = va_arg(numbers, int);

	if (i < 0)
	{
		index1 = index1 + _putchar('-');
		n = i * -1;
	}
	else
		n = i;
	while (n / index2 > 9)
	{
		index2 *= 10;
	}

	while (index2 != 0)
	{
		index1 = index1 + _putchar(n / index2 + '0');
		n = n % index2;
		index2 = index2 / 10;
	}

	return (index2);
}

/**
* print_longint - function to print integers
* @numbers: list to consider
*
* Return: the integer
*/
int print_longint(va_list numbers)
{
	int i, index1 = 0, index2 = 1;
	int n;

	i = va_arg(numbers, int);

	if (i < 0)
	{
		index1 = index1 + _putchar('-');
		n = i * -1;
	}
	else
		n = i;
	while (n / index2 > 9)
	{
		index2 *= 10;
	}

	while (index2 != 0)
	{
		index1 = index1 + _putchar(n / index2 + '0');
		n = n % index2;
		index2 = index2 / 10;
	}

	return (index2);
}
