#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alpha in lower and upper
 *
 * Return: Always 0
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
