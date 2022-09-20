#include "main.h"

/**
* swap_int - Swap values of two integer
* @a: first integer args
* @b: second integer args
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
