#include "main.h"

/**
 * _strstr - a function that
 * @haystack: char po 1
 * @needle: char po 2
 * Return: mmm
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *y = haystack;
		char *e = needle;

		while (*y == *e && *e != '\0')
		{
			y++;
			e++;
		}
		if (*e == '\0')
			return (haystack);
	}
	return (0);
}

