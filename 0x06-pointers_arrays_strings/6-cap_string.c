#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 *
 * @str: The input string to capitalize
 *
 * Return: A pointer to the capitalized string
 */
char *cap_string(char *str)
{
	char *print = str;
	int capitalize = 1;

	while (*print != '\0')
	{
		if (*print >= 'a' && *print <= 'z')
		{
			if (capitalize)
				*print = (*print) - ('a' - 'A');

			capitalize = 0;
		}
		else
		{
			switch (*print)
			{
				case ' ':
				case '\t':
				case '\n':
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '\"':
				case '(':
				case ')':
				case '{':
				case '}':
					capitalize = 1;
					break;
				default:
					capitalize = 0;
			}
		}

		print++;
	}

	return (str);
}
