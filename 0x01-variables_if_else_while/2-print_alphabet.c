#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print all alpha
 *
 * Return: always 0
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchart('\n');
	return (0);
}

