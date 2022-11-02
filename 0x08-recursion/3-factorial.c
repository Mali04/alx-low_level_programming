#include "main.h"

/**
 * factorial - check code
 * @n: input int
 * Return: fact of n
 */

int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n > 1)
	return (n * factorial(n - 1));
else
	return (1);
}

