#include <stdio.h>

/**
 * main - a function that give the number of the command line
 * @argc: intger
 * @argv: this is pointer
 * Return: 0 or 1
*/
int main(int argc, char *argv[] _attribute_((unused))
		{
		printf("%d\n", argc - 1);
		return (0);
		}
