#include <stdio.h>

/**
 * main - A program that prints all possible combinations of two digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j = 1;

	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '1');

			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
