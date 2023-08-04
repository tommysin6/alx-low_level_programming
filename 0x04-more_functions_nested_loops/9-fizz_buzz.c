#include <stdio.h>

/**
 * main - A FizzBuzz program
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			_putchar("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			 _putchar("Fizz");
		}
		else if (a % 5 == 0)
		{
			_putchar("Buzz");
		}
		else
		{
			_putchar(a + '0');
		}

		if (a != 100)
		{
			_putchar(' ');
		}
	}
}
