#include "main.h"

/**
 * puts_half - A program that prints half of a string
 *
 * @str: The input string.
 */


void puts_half(char *str)
{
	int check = 0, a;

	while (check >= 0)
	{
		if (str[check] == '\0')
			break;
		check++;
	}
	if (check % 2 == 1)
	{
		a = check / 2;
	}
	else
	{
		a = (check - 1) / 2;
	}

	for (a++; a < check; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
