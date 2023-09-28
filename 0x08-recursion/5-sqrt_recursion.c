#include "main.h"

/**
 * _sqrt_recursion - a function that
 *
 * @n: int
 * @qu: int
 *
 * Return: squar root
*/

int asqrt(int n, int qu);
int _sqrt_recursion(int n)
{
	return (asqrt(n, 1));
}

/**
 * asqrt - a function that help
 *
 * @n: int
 * @qu: int
 * Return: int
*/

int asqrt(int n, int qu)
{
	if (qu * qu == n)
		return (qu);
	else if (qu * qu < n)
		return (asqrt(n, qu + 1));
	else
		return (-1);
}

