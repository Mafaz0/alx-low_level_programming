#include "main.h"

/**
 * print_number -  prints an integer
 * @n: integer parameter
 * Return: 0
*/

void print_number(int n)
{
	unsigned int n2;

	n2 = n;

	if (n < 0)
	{
		_putchar('-');
		n2 = -n;
	}

	if (n2 / 10 != 0)
	{
		print_number(n2 / 10);
	}
	_putchar((n2 % 10) + '0');
}
