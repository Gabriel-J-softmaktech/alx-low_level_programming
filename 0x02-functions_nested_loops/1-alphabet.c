#include "main.h"
/**
* main - main block
* print_alphabet - function to print alphabets in lowercase
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
