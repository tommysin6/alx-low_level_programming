#include "main.h"

/**
 * _atoi - A program that converts a string to an integer
 *
 * @s: input string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int a = 0, b = 0, c = 0, length = 0, d = 0, value = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (a < length && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			value = s[a] - '0';
			if (b % 2)
				value = -value;
			c = c * 10 + value;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
