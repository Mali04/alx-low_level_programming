#include "main.h"

/**
 * _isdigit - check code
 * @c: input char
 * Return: 1 if digit 0 if not.
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
return (0);
}

