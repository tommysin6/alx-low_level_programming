#include <stdio.h>
#include <math.h>

/**
 * main - A program that prints largest prime factor
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int a;
	long int b;
	long int c;

	a = 612852475143;
	b = -1;

	while (a % 2 == 0)
	{
		b = 2;
		a /= 2;
	}

	for (c = 3; c <= sqrt(n); c = c + 2)
	{
		while (a % c == 0)
		{
			b = c;
			a = a / c;
		}
	}

	if (a > 2)
	{
		b = a;
	}
	printf("%ld\n", b);

	return (0);
}
