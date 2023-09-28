#include "main.h"

int aprime(int n, int w);

/**
 * is_prime_number - a function that  returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: int
 * Return: 1 if it prime, 0 if it not
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (aprime(n, n - 1));
}

/**
 * aprime - a fun that is help
 * @n: int
 * @w: int
 * Return: 1 prime, 0 not
*/

int aprime(int n, int w)
{
	if (w == 1)
		return (1);
	if (n % w == 0 && w > 0)
		return (0);
	return (aprime(n, w - 1));
}
