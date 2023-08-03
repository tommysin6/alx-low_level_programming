#include "main.h"

/**
 * _isdigit - A program that checks for a digit
 *
 * @c: Character to check
 *
 * Return: 1 if it is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
