#include <stdio.h>
#include "main.h"

/**
 * main - The main function
 * @argc: The argument count
 * @argv: The argument variables
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
