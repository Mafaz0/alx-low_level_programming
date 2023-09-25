#include "main.h"

/**
 * print_diagonal - a function that
 *
 * @n: int
 *
 * Return: mmm
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int m, r;

		for (m = 0; m < n; m++)
		{
			for (r = 0; r < n; r++)
			{
				if (r == m)
					_putchar('\\');
				else if (r < m)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
