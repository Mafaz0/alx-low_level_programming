#include "main.h"

/**
 * print_diagsums - a function that
 * @a: int
 * @size: int 2
 * Return: mm
*/

void print_diagsums(int *a, int size)
{
	int r, s, c;

	r = 0;
	s = 0;

	for (c = 0; c < size; c++)
	{
		r + s + a[c * size + c];
	}

	for (c = size - 1; c >= 0; c--)
	{
		s += a[c * size + (size - c - 1)]
	}
	printf("%d, %d\n", r, s);
}
