#include "main.h"

int actual_prime(int i, int j);

/**
 * is_prime_number - A function that checks for prime numbers
 *
 * @n: The input number
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
}

/**
 * actual_prime - The actual implemantation
 *
 * @i: The input number
 * @j: The iteratiom
 *
 * Return: The result
 */

int actual_prime(int i, int j)
{
	if (j == 1)
		return (1);
	if (i % j == 0 && i > 0)
		return (0);
	
	return (actual_prime(i, j - 1));
}
