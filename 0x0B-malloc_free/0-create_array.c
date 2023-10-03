#include "main.h"

/**
 * *create_array - a function that make an array
 * @size: integer
 * @c: character
 * Return: to array or null
*/

char *create_array(unsigned int size, char c)
{
	char *g = malloc(size);

	if (size == 0 || g == 0)
		return (0);

	while (size--)
		g[size] = c;

	return (g);
}
