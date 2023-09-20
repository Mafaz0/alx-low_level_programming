#include "main.h"

/**
 * _strcat -  function appends the src string to the dest string
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int s, s1;

	s = 0;
	while (dest[s])
		s++;

	for (s1 = 0; src[s1]; s1++)
		dest[s++] = src[s1];

	return (dest);
}
