#include <stdio.h>
#include "main.h"

/**
 * main - The main function
 * @argc: Argument count
 * @argv: Argument variables
 *
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[0]);

	return (0);
}
