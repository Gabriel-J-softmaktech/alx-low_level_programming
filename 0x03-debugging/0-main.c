#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - main entry point
* Description: check if an integer is positive or negative
* Return: 0
*/

void positive_or_negative(int i)
{
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
	else if (i == 0)
		printf("%i is zero\n", i);
	else
		printf("%i no input provided\n", i);

	return (0);
}
