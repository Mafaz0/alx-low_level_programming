#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print 0-9 by putchar
 *
 * Return: always 0
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*Convert digit to ASCII*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
