#include "main.h"
#include <stdio.h>
/**
 * print_array - print n element of an array
 * @a: array
 * @n: number of values to be printed
 */

void print_array(int *a, int n)
{
	int t;

	for (t = ; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n);
}
