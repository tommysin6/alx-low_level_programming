#include "main.h"

/**
 * print_times_table - A program that the n times table
 *
 * @n: The character to check
 *
 * Return: void
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c =  a * b;
				if (b == 0)
				{
					_putchar(c + '0');
				}
				else if (c < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c >= 10 && c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
