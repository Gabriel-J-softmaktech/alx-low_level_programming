#include <stdio.h>
#include <time.h>
/* more headers goes here */

/* betty style doc for function main goes here */
int main(void)
{

	int n;
	
	srand(time(0));
	n = rand() - REND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);	
	

}

