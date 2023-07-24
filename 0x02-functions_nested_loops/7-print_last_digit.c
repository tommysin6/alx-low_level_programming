#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 *
 * @n: Character to check
 *
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int c;

	c = n % 10;

	if (c < 0)
	{
		_putchar(-c + '0');
		return (-c);
	}
	else
	{
		_putchar(c + '0');
		return (c);
	}
}
