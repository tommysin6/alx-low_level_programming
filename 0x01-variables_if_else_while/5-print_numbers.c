#include <stdio.h>

/**
 * main - A program that prints single digit numbers of base ten
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
