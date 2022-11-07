#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: nmbr of argm
 * @argv: array of argm
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
