#include "main.h"
#include <stdio.h>

/**
 * _lower - determaine is it lowercase
 * @n: character
 * Return: 1 true, 0 false
*/

int _lower(char n)
{
	return (n >= 97 && n <= 122);
}

/**
 * _delimiter - determines is it delimiter
 * @n: character
 * Return: 1 true, 0 false
*/

int _delimiter(char n)
{
	int i;

	char del[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (n == del[i])
			return (1);
	return (0);
}

/**
 * *cap_string - capitalizes all words of a string.
 * @s: input string
 * Return: string capital
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int delimit = 1;

	while (*s)
	{
		if (_delimiter(*s))
			delimit = 1;
		else if (_lower(*s) && delimit)
		{
			*s -= 32;
			delimit = 0;
		}
		else
			delimit = 0;
		s++;
	}
	return (ptr);
}

