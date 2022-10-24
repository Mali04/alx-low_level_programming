#include "main.h"

/**
 * print_rev - check code
 * @s: input string
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}

