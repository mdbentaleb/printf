#include "main.h"

/**
* _binary - function to print binary
* @num: the list passed
*
* Return: the binary form
*/
int _binary(va_list num)
{
	int count = 0, i;
	int *arr;
	unsigned int n = va_arg(num, unsigned int);
	unsigned int tmp = n;

	while (n / 2 != 0)
	{
		n /= 2;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 2;
		tmp /= 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
