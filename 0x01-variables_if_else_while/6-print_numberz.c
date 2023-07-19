#include <stdio.h>

/**
 * main - A program that prints all single digit numbers of base ten
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
