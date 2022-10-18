#include "main.h"

/**
 * print_alphabet_x10 - Check the code
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
int y;
char i;
for (y = 0 ; y < 10 ; y++)
{
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
}
