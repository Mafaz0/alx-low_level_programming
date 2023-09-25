#include "main.h"

/**
 * _strpbrk - a function that
 *
 * @s: character po 1
 * @accept: char po 2
 *
 * Return: mmm
*/

char *_strpbrk(char *s, char *accept)
{
	int uk, lk;
	char *ptr;

	uk = 0;
	while (s[uk] != '\0')
	{
		lk = 0;
		while (accept[lk] != '\0')
		{
			if (accept[lk] == s[uk])
			{
				ptr = &s[uk];
				return (ptr);
			}
			lk++;
		}
		uk++;
	}
	return (0);
}

