#include "main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes nimber input
*/

void print_times_table(int n)
{
	int prod, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			-putchar(48);
			for (mult = 1;  mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' '
