#include "main.h"
/**
 * print_sign - Check main
 * @n: An input number
 * Description: This function prints the sign of the number
 * Return: 1 if number is positive, 0 if number is 0, or
 * -1 if number is negative
 */

int print_sign(int n)
{
int res = 0;
if (n > 0)
{
	_putchar('+');
	res = 1;
}
else if (n < 0)
{
	_putchar('-');
	res = -1;
}
else
{
	_putchar('0');
	res = 0;
}
return (res);

}
