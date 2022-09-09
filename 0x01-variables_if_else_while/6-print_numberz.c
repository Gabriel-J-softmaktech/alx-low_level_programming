#include <stdio.h>
/**
* main - main block
* Description: Print all single digit numbers of base 10
* Starting from 0, followed by new line.
* Return: 0
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}

	putchar('\n');
	return (0);
}
