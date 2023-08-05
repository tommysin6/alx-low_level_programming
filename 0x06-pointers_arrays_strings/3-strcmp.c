#include "main.h"

/**
 * _strcmp - A program that compares two strings
 *
 * @s1: The first string to compare
 *
 * @s2: The second string to compare
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 *         respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int difference;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	difference = *s1 - *s2;

	return (difference);
}
