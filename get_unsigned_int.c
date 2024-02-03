#include "main.h"

/**
* unsigned_int - function to print unsigned int
* @number: number list
*
* Return: The unsigned int
*/
int unsigned_int(va_list number)
{
	int index1 = 1, index0 = 0;
	unsigned int n;

	n = va_arg(number, unsigned int);

	while (n / index1 > 9)
		index1 *= 10;
	while (index1 != 0)
	{
		index0 = index0 + _putchar(n / index1 + '0');
		n = n % index1;
		index1 = index1 / 10;
	}
	return (index0);
}
