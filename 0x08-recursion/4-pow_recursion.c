#include "main.h"

/**
 * _pow_recursion - A function that returns the power
 *
 * @x: The first number
 *
 * @y: The power
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
