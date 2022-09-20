#include "main.h"

/**
* _strlen - function that print the length of a given string
* @s: provided integer
* Return: length of integer
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
