#include "main.h"
/**
 * print_last_digit - Check main
 * @n: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number n
 */

int print_last_digit(int n)
{
int res;

if (n < 0)

	res = -1 * (n % 10);
else
	res = n % 10;

_putchar((res % 10) + '0');

return (res % 10);

}
