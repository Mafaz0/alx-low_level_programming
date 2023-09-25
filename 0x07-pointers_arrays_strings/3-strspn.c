#include "main.h"

/**
 * _strspn - a function that
 *
 * @s: charecter pointer 1
 * @accept: character pointer 2
 *
 * Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int uk, lk;

	for (uk = 0; s[uk] != '\0'; uk++)
	{
		for (lk = 0; accept[lk] != s[uk]; lk++)
		{
			if (accept[lk] == '\0')
				return (uk);
		}
	}

	return (uk);
}
