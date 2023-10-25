#include "main.h"

int palindrome_check(char *s, int i, int len);
int _strlen(char *s);

/**
 * is_palindrome - A function that checks for a palindrome
 *
 * @s: The input string
 *
 * Return: 1 if success, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome_check(s, 0, _strlen(s)));
}

/**
 * _strlen - returns the length of a string
 * @s: The string
 *
 * Return: The length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * palindrome_check - check the characters for palindrome
 *
 * @s: The string
 * @i: Iteration
 * @len: lenth of the string
 *
 * Return: 1 if success, 0 if not
 */

int palindrome_check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (palindrome_check(s, i + 1, len - 1));
}
