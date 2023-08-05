#include "main.h"
#include <stdio.h>

/**
 * print_array - A program that prints elements in an array
 *
 * @a: The array of integers.
 *
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)

{
	int b;

	for (b = 0; b < n; b++)

	{
		printf("%d", a[b]);
		if (b < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
