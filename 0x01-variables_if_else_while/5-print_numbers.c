#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit number
 *
 * Return: always 0
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		printf("%i", digit);
	}
	printf("\n");
	return (0);
}

