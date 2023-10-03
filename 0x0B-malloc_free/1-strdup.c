#include "main.h"
/**
 * *_strdup - a function that
 * @str: pointer
 * Return: 0
*/
char *_strdup(char *str)
{	int g, u = 0;
	char *qu;

	if (str == NULL)
	return (NULL);

	for (; str[size] != '\0'; size++)
	;

	qu = malloc(size * sizeof(*str) + 1);

	if (qu == 0)
	return (NULL);
	else
	{
	for (; g < size; g++)
	qu[g] = str[g];
	}
	return (qu);

