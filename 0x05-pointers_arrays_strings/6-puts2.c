#include "main.h"

/**
 * puts2 - A program that prints every other character of a string
 *
 * @str: Pointer to the string.
 */

void puts2(char *str)
{
	int check = 0;

	while (check >= 0)
	{
		if (str[check] == '\0')

		{
			_putchar('\n');
			break;
		}
		if (check % 2 == 0)

			_putchar(str[check]);
		check++;
	}
}

