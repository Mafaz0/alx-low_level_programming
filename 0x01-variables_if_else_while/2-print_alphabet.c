#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: always 0
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (CH <= 'Z')
	{

		putchart(CH);
		CH++;
	}
	putchart('\n');

	return (0);
}

