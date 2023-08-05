#include "main.h"

/**
 * rot13 -A program that encodes a string using rot13
 *
 * @str: The input string to encode
 *
 * Return: A pointer to the encoded string
 */

char *rot13(char *str)
{
	int a, b;

	char *c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *d = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (c = 0; c[b] != '\0'; b++)
		{
			if (str[a] == c[b])
			{
				str[a] = d[b];
				break;
			}
		}
	}

	return (str);
}
