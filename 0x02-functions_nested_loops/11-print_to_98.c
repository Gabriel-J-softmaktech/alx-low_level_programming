#include "main.h"
/**
* print_to_98 - prints from any integer to 98
* @n: integer input
*
* Return: void
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar("\n");
}
