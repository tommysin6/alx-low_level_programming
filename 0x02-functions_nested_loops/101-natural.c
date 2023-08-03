#include <stdio.h>

/**
 * main - A program that computes the sum of multiples
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int m = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			m += n;
		}
	}
	printf("%d\n", m);

	return (0);
}
