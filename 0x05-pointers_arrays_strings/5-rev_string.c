#include "main.h"

/**
 * rev_string - A program that reverse a string
 *
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)

{
	int len = 0;
	int a, b;
	char c;

	while (s[len] != '\0')

	{
		len++;
	}

	for (a = 0, b = len - 1; a < b; a++, b--)

	{
		c  = s[a];
		s[a] = s[b];
		s[b] = c;
	}
}
