#include "main.h"

/**
 * print_sign - A program that prints the sign of a number
 *
 * @c: The character to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if it is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
