#include "main.h"

/**
 * _strcpy - A program that copies a string pointed to by src
 *
 * @dest: The destination buffer.
 *
 * @src: The source string to be copied.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_print = dest;

	while (*src != '\0')

	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_print);
}
