#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: nmbr of argm
 * @argv: array of argm
 * @Return: 0 if everything is okay , 1 if theres an error.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
