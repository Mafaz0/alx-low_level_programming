#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that is fills
 *
 * @s: a pointer
 *
 * @b: char
 *
 * @n: int
 *
 * Return: return s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int lk;

	for (lk = 0; n > 0; lk++; n--)
	{
		s[lk] = b;
	}
	return (s);
}
