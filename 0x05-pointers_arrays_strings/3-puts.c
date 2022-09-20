#include "main.h"
#include <stdio.h>

/**
* _puts - prints a given string
* @str: string to print
* Description: prints a string
* On success: return no error
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		putchar(*(str + 1));
		i++;
	}
	putchar(10);
}
