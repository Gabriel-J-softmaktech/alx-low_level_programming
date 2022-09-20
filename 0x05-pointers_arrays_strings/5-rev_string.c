#include <stdio.h>
#include "main.h"

/**
* rev_string - function reverses a given string
* @s: string to reverse
* Return: null
*/

void rev_string(char *s)
{
	int i, p, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		p = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = p;
	}
}

/**
* _strlen - return the length of a given string
* @s: given string
* Return: string length
*/

int _strlen(char *s)
{
	int len = 0;

	while(*(s + len) != '\0')
		len++;

	return (len);
}
