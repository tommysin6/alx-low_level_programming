#include "main.h"

/**
 * times_table - Prints nine times table
 *
 * Return: void
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (a < 9)
			{
				_putchar(",");
				_putchar(" ");
				_putchar(" ");
			}
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
