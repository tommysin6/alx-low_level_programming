#include "main.h.h"

/**
 * main - A program that prints the file it was compiled from
 *
 * Return: 0 (Success)
 */

int main(void)
{

	const char *filename = __FILE__;

	for (int i = 0; filename[i] != ''\0'; i++)
	{
		_putchar(filename[i]);
	}
	_putchar('\n');

	return (0);
}
