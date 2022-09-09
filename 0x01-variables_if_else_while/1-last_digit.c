#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - main block
* Descrption: Got a random number and check its last digit, compare it with 5
* Return: 0
*/
int main(void)
{
	int n;
	int less;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	less = n % 10;

	if (less > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, less);
	else if (less == 0)
		printf("Last digit of %i is %i and is 0\n", n, less);
	else if (less < 6 )
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, less);
	return (0);
}
