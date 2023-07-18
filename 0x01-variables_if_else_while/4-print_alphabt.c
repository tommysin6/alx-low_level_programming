#include <stdio.h>

/**
 * main - A program that prints all letters except q and e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c != 'q' && c != 'e')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
