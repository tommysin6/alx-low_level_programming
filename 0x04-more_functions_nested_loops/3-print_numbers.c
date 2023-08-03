#include "main.h"

/**
 * print_numbers - A program that prints numbers from zero to nine
 *
 * Return: void
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= 9; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
