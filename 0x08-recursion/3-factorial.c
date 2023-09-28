#include "main.h"

/**
 * factorial - a function that
 *
 * @n: int
 *
 * Return: mm
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

