# PRINTF
<p align="left">

<img src="https://user-images.githubusercontent.com/111146026/196436282-027f9cee-998b-4780-beb3-d4eb943a4718.png">

</p>

This is a repository that contains all functions required for custom printf function created by us (Maranatha Adesanya and Abraham Kanime). Our printf function attempts to replicate some of the features of the printf function contained in stdio.h. It is designed to handle these conversion specifiers: c, s, i, d, %, u, x, X, rot13, and o.

## Example

_printf("%s is %d inches tall!", "Maranatha", 4);

Output: Maranatha is 4 inches tall!

## Brief Description

_printf() function takes 2 arguments: a character pointer to a string: format, and a 'variable arguments list': list. _printf() loops through the format string searching for a conversion specifier, which is indicated with the '%' symbol. If found, the function loops through an array of structs (contianing character and function pairs) to find the specifier function that is matched with the given conversion specifier from the format string, and then returns a pointer to that paired function. It includes a main.h file that has the prototypes of the functions and structs used.

## Notes

Our program does not handle pointers, buffers, flag characters, field width, length modifiers, precision, reversals

## Authors

### Abraham Kanime and Maranatha Adesanya
