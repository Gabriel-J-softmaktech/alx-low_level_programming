#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/** 
* main - main block
* Description: Get a random number and print the number
* use conditional statements to check if it is positive, negative, or zero
* Return: 0
*/ 
int main(void)
{
	int n;	


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);


	return (0);	
}
