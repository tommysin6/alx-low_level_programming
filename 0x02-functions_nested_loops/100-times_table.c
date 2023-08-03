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
				print_cell(c, b);
			}
			_putchar('\n');
		}
	}
}

/**
 * print_cell- Prints individual cell
 *
 * @num: Value of cell
 * @col: Column number
 */

void print_cell(int num, int col)
{
	if (col != 0)
	{
		_putchar(',');
		_putchar(' ');

		if (num < 100)
		{
			_putchar(' ');
		}
	}

	if (num < 10)
	{
		_putchar(num + '0');
	}
	else if (num < 100)
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar((num / 100) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	}
