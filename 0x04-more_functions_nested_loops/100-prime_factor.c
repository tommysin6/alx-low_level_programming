#include "main.h"

/**
 * main - A program that prints the largest prime factor
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long biggest = 0;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
			biggest = factor;
		}
		else
		{
			factor++;
		}
	}
	_putchar(biggest + '0');
	_putchar('\n');

	return (0);
}

