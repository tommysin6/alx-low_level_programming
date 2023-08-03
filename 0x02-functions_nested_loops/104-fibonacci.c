#include <stdio.h>

/**
 * main - A program that prints fibonacci numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	unsigned long int d;

	printf("%lu, %lu", a, b);

	for (d = 2; d <= 98; d++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
