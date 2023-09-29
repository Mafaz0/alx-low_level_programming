#include "main.h"

int _test(char *s, int j, int lng);
int _lengh(char *s);

/**
 * is_palindrome - function that test a string
 * @s: string 1
 * Return: int
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_test(s, 0, _lengh(s)));
}

/**
 * _lengh - afunction that found the length of the string
 * @s: string to
 * Return: length of string
*/

int _lengh(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lengh(s + 1));
}

/**
 * _test - afunction *that test string
 *
 * @s: char point
 * @j: int 1
 * @lng: int 2
 * Return: 1 or 0
*/

int _test(char *s, int j, int lng)
{
	if (*(s + j) != *(s + lng - 1))
		return (0);
	if (j >= lng)
		return (1);
	return (_test(s, j + 1, lng - 1));
			}
