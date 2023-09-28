#include "main.h"

/**
 * _strlen_recursion - a function that
 *
 * @s: char
 *
 * Return: mm
*/

int _strlen_recursion(char *s)
{
	int qu;

	while (*s > '\0')
	{
		qu += _strlen_recursion(s + 1) + 1;
	}

	return (qu);
}

