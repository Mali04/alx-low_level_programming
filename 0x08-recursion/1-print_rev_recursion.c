nclude "main.h"

/**
 * print_rev_recursion - check code
 * @s: input string
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
