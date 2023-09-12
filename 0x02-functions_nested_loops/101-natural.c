#include "main.h"

/**
 * main - Entry point
 *
 * Description: computes the sum of all
 * the multip of 3 or 5
 * below 1024 (excluded)
 *
 * Return: always 0
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 10234; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
