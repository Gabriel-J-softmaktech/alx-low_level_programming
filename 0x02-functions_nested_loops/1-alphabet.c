#include "main.h"
/**
* main - main block
* Description: Print alphabet in lowercase and a new line
* Return: 0
*/
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
