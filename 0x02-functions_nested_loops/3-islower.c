#include "main.h"

/**
 * _islower - A function that checks for lowercase characters
 *
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
