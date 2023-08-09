#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - Helper function to check palindrome using recursion.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1); /* If all characters checked, it's a palindrome */

	if (s[start] != s[end])
		return (0); /* If characters don't match, it's not a palindrome */
	else
		return (check_palindrome(s, start + 1, end - 1)); /* Check next characters */
}
