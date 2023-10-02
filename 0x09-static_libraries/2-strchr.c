#include "main.h"

/**
 * _strchr - a function that
 *
 * @s: character pointer
 * @c: character
 *
 * Return: pointer
*/

char *_strchr(char *s, char c)
{
	int w;

	for (w = 0; s[w] >= '\0'; w++)
	{
		if (s[w] == c)
		{
			return (s + w);
		}
	}

	return ('\0');
}

