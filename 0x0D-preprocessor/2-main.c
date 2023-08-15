#include <stdio.h>

/**
 * main - A program that prints the file it is compiled from
 *
 * Return: 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
