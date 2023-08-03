#include <stdio.h>

/**
 * main - A program that prints fibonacci numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	int c;
	long int d = 2;

	for (c = a + b; c <= 4000000; c++)
	{
		if (c % 2 == 0)
		{
			d += c;
			a = b;
			b = c;
		}
	}
	printf("%lu\n", d);

	return (0);
}
