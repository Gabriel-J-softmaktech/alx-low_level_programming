#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - function prints reverse of a given string
* @s: String to print reverse of
* Return: null
*/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
