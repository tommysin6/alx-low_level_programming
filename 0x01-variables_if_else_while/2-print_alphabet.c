#include <stdio.h>

/**
 * main - A program that prints the alphabets in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c++;
	}

	return (0);
}
