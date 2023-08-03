#include "main.h"

/**
 * _isupper - A program that checks for uppercase characters
 *
 * @c: Character to check
 *
 * Return: 1 if it upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
