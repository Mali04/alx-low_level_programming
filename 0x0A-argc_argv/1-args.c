#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: number of argm
 * @argv: argm
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
