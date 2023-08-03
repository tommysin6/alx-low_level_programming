#include <ctype.h>

/**
 * _isupper - A program that checks for uppercase characters
 *
 * @c: Character to check
 *
 * Return: 1 if it upper, 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
