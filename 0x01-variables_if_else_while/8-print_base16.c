#include <stdio.h>
#include <stdlib.h>
/**
* Description: Print all the numbers of base 16 in lowercase
* followed by new line.
* Return: 0
*/
int main(void)
{
	char base16 = '0';

	while (base16 <= '9')
	{
		putchar(base16);
		base16++;
	}


	char c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return(0);
}
