#include <stdio.h>

/**
 * main - A program that prints largest prime factor
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long long num = 612852475143;
	long long factor = 2;
	long long biggest = 0;

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
	printf("%lld\n", biggest);

	return (0);
}
