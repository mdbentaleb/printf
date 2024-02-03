#include "main.h"

/**
* ch - the function to return a char type
* @charact: the list
*
* Return: the char to be printed
*/
int ch(va_list charact)
{
	return (_putchar(va_arg(charact, int)));
}
