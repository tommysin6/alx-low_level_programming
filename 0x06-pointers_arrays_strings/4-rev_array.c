#include "main.h"

/**
 * reverse_array - A program reverses the content of an array of integers
 *
 * @a: The array to be reversed
 *
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int begin = 0;
	int stop = n - 1;
	int temp;

	while (begin < stop)
	{
		temp = a[begin];
		a[begin] = a[stop];
		a[stop] = temp;
		begin++;
		stop--;
	}
}
