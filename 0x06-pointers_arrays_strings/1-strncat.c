#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from sr
 *
 * @dest: The destination string.
 *
 * @src: The source string to append to dest.
 *
 * @n: The maximum number of bytes from src to use.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_print = dest;
	int dest_length = 0;

	while (*dest_print != '\0')
	{
		dest_print++;
		dest_length++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest_print = *src;
		dest_print++;
		src++;
		n--;
	}

	*dest_print = '\0';

	return (dest);
}
