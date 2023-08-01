#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - A program that prints natural numbers
 *
 * @n: Starting number
 *
 * Return: Print natural numbers
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
