#include "main.h"

/**
 * print_square - print a squar using # character
 *
 * @size: is the size of the square
 *
 * Return: always 0
*/

void print_square(int size)
{
	int row, colum;

	for (row = 1; row <= size; row++)
	{
		for (colum = 1; colum <= size; colum++)
			_putchar('#');
		_putchar('\n');
	}
}
