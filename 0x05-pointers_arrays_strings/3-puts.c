#include "main.h"

/**
 * _puts - A program that prints a string then a new line
 *
 * @str: Pointer to the string to be printed.
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}
