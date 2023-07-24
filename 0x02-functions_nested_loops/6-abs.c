#include "main.h"

/**
 * _abs - A program that prints value of an integer
 *
 * @n: The character to check
 *
 * Return: Absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
