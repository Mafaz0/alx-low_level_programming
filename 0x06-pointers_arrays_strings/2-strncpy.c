#include "main.h"

/**
 * _strncpy - A function that copies a string
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate though src array
	 * where if there is no null byte
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the lengh of source
	 * write additional nullbytes
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}


