#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - a function that test to return 1 if the string
 * is palindrome and 0 if not
 * @n: parameter
 * @qu: parameter
 * Return: integer
*/

int test(int n, int qu);
int is prime_number(int n)
{
	return (test(n, 2));
}

/**
 * test - a function that test all
 * @n: parameter
 * @qu: parameter
 * Return: integer
*/

int test(int n, int qu)
{
	if (qu >= n && n > 1)
		return (1);
	else if (n % qu == 0 || n <= 1)
		return (0);
	else
		return (test(n, qu + 1));
}
