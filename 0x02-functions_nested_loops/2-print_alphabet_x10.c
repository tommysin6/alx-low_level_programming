#include "main.h"

/**
 * print_alphabet_x10 - A program that prints the alphabet ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int n;

	for (n = 0; n <= 10; n++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
