#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string.
 *
 * @src: The source string to append to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_print = dest;

	while (*dest_print != '\0')
	{
		dest_print++;
	}

	while (*src != '\0')
	{
		*dest_print = *src;
		dest_print++;
		src++;
	}

	*dest_print = '\0';

	return (dest);
}
