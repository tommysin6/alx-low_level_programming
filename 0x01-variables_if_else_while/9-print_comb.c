#include <stdio.h>

/**
 * main - A program that prints all possible combinations of single digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0' +',' + ' ');
		n++;
	}
	putchar('\n');

	return (0);
}
