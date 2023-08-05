#include "main.h"

/**
 * swap_int - A program that swap the value of integers
 *
 * @a: Point to first integer
 *
 * @b: Point to second integer
 */

void swap_int(int *a, int *b)
{
	int change = *a;

	*a = *b;
	*b = change;
}
