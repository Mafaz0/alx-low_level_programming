#include "main.h"
/**
 * *string_toupper - change all lowercase letter to upper case
 *
 * @str: string to return
 * Return: string
*/

char *string_toupper(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] >= 97 && str[c] <= 122)
		{
			str[c] = str[c] - 32;
		}
	}
	return (str);
}
