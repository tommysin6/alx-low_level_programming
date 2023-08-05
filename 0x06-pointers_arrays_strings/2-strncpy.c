#include "main.h"

/**
 * _strncpy - A program that copies a string
 *
 * @dest: The destination string
 *
 * @src: The source string to be copied
 *
 * @n: The maximum number of bytes to copy
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_print = dest;
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest_print[a] = src[a];
	}

	for (; a < n; a++)
	{
		dest_print[a] = '\0';
	}

	return (dest);
}
