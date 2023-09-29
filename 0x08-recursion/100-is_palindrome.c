#include "main.h"

/**
 * index - function count the null char
 * @s: a parameter
 * Return: integer
*/

int is_palindrome(char *s);
int _test(char *s, int f, int l, int qu);
int index(char *s)
{
	int m = 0;

	if (*s > '\0')
		m += index(s + 1) + 1;

	return (m);
}

/**
 * is_palindrome -  a function that returns 1 if a string is
 * a palindrome and 0 if not
 * @s: string
 * Return: int
*/

int is_palindrome(char *s)
{
	int l = index(s);

	return (_test(s, 0, l - 1, l % 2));
}

/**
 * _test - function that to test
 * @s: pointer
 * @f: int 1
 * @l: int 2
 * @qu: int 2
 * Return: integer
*/

int _test(char *s, int f, int l, int qu)
{
	if ((f == l && qu != 0) || (f == l + 1 && qu == 0))
		return (1);
	else if (s[f] != s[l])
		return (0);
	else
		return (_test(s, f + 1, l - 1, qu));
}


