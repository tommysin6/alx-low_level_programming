#include <stdio.h>

/**
 * main - A program that prints first fifty fibonacci numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 1;
	int b = 2;
	long int c;
	int d;

	printf("%d, %d", a, b);

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
