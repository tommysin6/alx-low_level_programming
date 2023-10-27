#include <stdio.h>

/**
 * main - The main function
 * @argc: The argument count
 * @argv: The argument variables
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	int multiply = argv[1] * argv[2];

	printf("%i\n", multiply);

	return (0);
}
