#include "main.h"

/**
 * print_array - check code
 * @a: array input
 * @n: array lenght
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
int i = 0;

for (; i < n - 1; i++)
	printf("%d, ", a[i]);
printf("%d\n", a[n - 1]);
}

