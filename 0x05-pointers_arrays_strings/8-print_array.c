#include <stdio.h>
#include "main.h"

/**
* print_array - print n element of array
* @a: The array
* @n: numbers of element in array
* Return: null
*/

void print_array(int *a, int n)
{
		int el;

		for (el = 0; el < n; el++)
		{
			if (el != n - 1)
				printf("%d, ", a[el]);
			else
				printf("%d", a[el]);
		}
		putchar(10);
}
