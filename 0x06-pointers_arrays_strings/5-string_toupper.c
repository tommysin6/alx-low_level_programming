#include "main.h"

/**
 * string_toupper - A program that changes all lowercase letters of a string to uppercase
 *
 * @str: The input string to convert
 *
 * Return: A pointer to the converted string
 */
char *string_toupper(char *str)
{
	char *print = str;

	while (*print != '\0')
	{
		if (*print >= 'a' && *print <= 'z')
		{
			*print = (*print) - ('a' - 'A');
		}
		print++;
	}
	return (str);
}
