#include <stdio.h>

/**
 * main - A program that prints all letters except q and e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			continue;
			putchar(c);
			c++;
		}
	}
	putchar('\n');

	return (0);
}
