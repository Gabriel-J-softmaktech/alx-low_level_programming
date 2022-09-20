#include <stdio.h>
#include "main.h"

/**
* puts_half - print a string
* @str: Given string
* Return: null
*/

void puts_half(char *str)
{
	int i, len = int_strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
* int_strlen - return the length of a given string
* @s: Given string
* Return: The length of the given string
*/

int int_strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
