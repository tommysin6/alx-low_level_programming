#include <stdio.h>

/**
 * main - A program that prints all possible combination of two digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 0;
	int b;
	int c;
	int d;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = a;
			while (c <= 9)
			{
				d = (c == a) ? b + 1 : 0;
				while (d <= 9)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');

					if (a != 9 && b != 9 && c != 9 && d != 9)
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
