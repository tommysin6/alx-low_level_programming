#include "main.h"

/**
 * leet - A program that encodes a string into 1337
 *
 * @str: The input string to encode
 *
 * Return: A pointer to the encoded string
 */

char *leet(char *str)
{
	int count = 0, a;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(str + count) == lowercase[a] || *(str + count) == uppercase[a])
			{
				*(str + count) = num[a];
				break;
			}
		}
	count++;
	}

	return (str);
}
