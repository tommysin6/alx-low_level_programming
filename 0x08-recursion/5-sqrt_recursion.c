#include "main.h"

int sqrt_help(int i, int j);

/**
 * _sqrt_recursion - A function that returns the square root of a number
 *
 * @n: The input number
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_help(n, 1));
}

/**
 * sqrt_help - _sqrt_recursion helper
 *
 * @i: The input number
 * @j: The iterator
 *
 * Return: The result
 */

int sqrt_help(int i, int j)
{
	if (j * j == i)
		return (j);
	if (j * j > i)
		return (-1);

	return (sqrt_help(i, j + 1));
}

