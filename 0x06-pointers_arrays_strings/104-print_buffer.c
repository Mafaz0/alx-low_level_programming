#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: buffer
 * @size: size
 * Return: void
*/

void print_buffer(char *b, int size)
{
	int a, d, c;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		d = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (c = 0; c < 10; c++)
		{
			if (c < d)
				printf("%02x", *(b + a + c));
			else
				printf("  ");
			if (c % 2)
			{
				printf(" ");
			}
		}
		for (c = 0; c < d; c++)
		{
			int n = *(b + a + c);

			if (n < 32 || n > 132)
			{
				n = '.';
			}
			printf("%c", n);
		}
		printf("\n");
		a += 10;
	}
}

