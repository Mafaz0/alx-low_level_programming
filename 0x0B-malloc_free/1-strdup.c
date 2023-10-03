#include "main.h"
/**
 * *_strdup - a function that
 * @str: pointer
 * Return: 0
*/
char *_strdup(char *str)
{	int g = 0, u = 0;
	char *qu;

	if (str == NULL)
	return (NULL);

	for (; str[u] != '\0'; u++)
	;

	qu = malloc(u * sizeof(*str) + 1);

	if (qu == 0)
	return (NULL);
	else
	{
	for (; g < u; g++)
	qu[g] = str[g];
	}
	return (qu);
}
