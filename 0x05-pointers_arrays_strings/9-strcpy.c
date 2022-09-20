#include "main.h"

/**
* _strcpy - function that copy string
* @dest: destination
* @src: source
* Return: destination or location
*/

char *_strcpy(char *dest, char *src)
{
	int elem = 0;

	while (*(src + elem) != '\0')
	{
		*(dest + elem) = *(src + elem);
		elem++;
	}
	*(dest + elem) = '\0';

	return (dest);
}
