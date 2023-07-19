#include <stdio.h>

/**
 * main - A program that prints all numbers of base sixteen in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c = 0;
	char a = 'a';

	while (c <= 9)
	{
		if (c == 9 && a <= 'f')
		{
			putchar(a);
			a++;
		}
		putchar(c + '0');
		c++;
	}
	putchar('\n');

	return (0);
}
