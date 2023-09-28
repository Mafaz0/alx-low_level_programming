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
	int counter;

	while (*s != '\0')
	{
		_strlen_recursion(s + 1);
	}

	return (counter);
}

