#include "main.h"

/**
* _strlen - function to get string length
* @string: the string
*
* Return: the length
*/
int _strlen(char *string)
{
	int length = 0;

	while (string[length] != '\0')
		length++;

	return (length);
}
