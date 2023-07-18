#include <stdio.h>

/**
 * main -A program that prints lowercase then uppercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c = 'a';
	int u = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');

	return (0);
}
