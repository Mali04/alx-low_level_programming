#include "main.h"

/**
 * print_num - print numbers
 * print_number - print numbers
 * @n: input int
 * Return: Nothimg
 */

void print_num(int n)
{
if (n < 10)
	_putchar('0' + n);
else if (n >= 10 && n < 100)
{
	_putchar('0' + n / 10);
	_putchar('0' + n % 10);
}
else if (n >= 100 && n < 1000)
{
	_putchar('0' + n / 100);
	_putchar('0' + n % 100 / 10);
	_putchar('0' + n % 100 % 10);
}
else if (n >= 1000 && n < 10000)
{
	_putchar('0' + n / 1000);
	_putchar('0' + n % 1000 / 100);
	_putchar('0' + n % 1000 % 100 / 10);
	_putchar('0' + n % 1000 % 100 % 10);

}
}

/**
 * print_number - check code
 * @n: input int
 * Return: Nothing
 */

void print_number(int n)
{
if (n >= 0)

	print_num(n);

else
{
	_putchar('-');
	n *= -1;
	print_num(n);

}
}

