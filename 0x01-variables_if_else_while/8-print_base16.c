#include <stdio.h>
#include <stdlib.h>
/**
* Description: Print all the numbers of base 16 in lowercase
* followed by new line.
* Return: 0
*/
int main(void)
{
	char d = '0';
	char c = 'a';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}


	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
