#include "main.h"

/**
 * _memcpy - a fanction that copies memory area
 *
 * @dest: charecter pointer 1
 * @src: character poiter 2
 * @n: integer
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}

	return (dest);
}
