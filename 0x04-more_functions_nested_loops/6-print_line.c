#include "main.h"

/**
 * print_line - check code
 * @n: input int
 * Return: Always 0.
 */

void print_line(int n)
	{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		_putchar('_');
	}
	_putchar('\n');
	}

