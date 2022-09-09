#include <stdio.h>
/**
* main - main block
* Description: print all single digit numbers from 0 to base 10
* starting from 0, followed by a new line.
*/
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
