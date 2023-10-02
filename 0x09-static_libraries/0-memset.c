#include "main.h"

/**
 * _memset - a function that is fills memory with a constant byte
 * @s: character pointer
 * @b:  character
 * @n: integer
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int lk = 0;

	for (; n > 0; lk++)
	{
		s[lk] = b;
		n--;
	}

	return (s);
}
