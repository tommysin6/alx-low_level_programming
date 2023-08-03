#include <stdio.h>

/**
 * main - A program that prints first fifty fibonacci numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int d;

	printf("%lu, %lu", a, b);

	for (d = 2; d < 50; d++)
	{
		c = a + b;
		printf(", %lu", c);

		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
