#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: Pointer to the string to be printed
 */

void print_rev(char *s)
{
	int len = 0;
	int a;

	while (s[len] != '\0')
	{
		len++;
	}

	for (a = len - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
