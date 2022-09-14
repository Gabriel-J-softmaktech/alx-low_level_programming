#include "main.h"
/**
* main - main block
* Description: function print_alphabet in lowercase 
* with a new line at the end
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
