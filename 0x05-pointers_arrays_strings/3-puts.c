#include "main.h"

/**
 * _puts - check code
 * @str: input string
 * Return: Nothing.
 */

void _puts(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;
	for (; i < len ; i++)
		_putchar(str[i]);
	_putchar('\n');
}

