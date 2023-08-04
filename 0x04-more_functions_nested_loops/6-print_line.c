#include "main.h"

/**
 * print_line - A program that prints a straight line
 *
 * @n: Character to check
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		continue;
	}
	else
	{
		_putchar(n + '_');
	}
	_putchar('\n');
}
