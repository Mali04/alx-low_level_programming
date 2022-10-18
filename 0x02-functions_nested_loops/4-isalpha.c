#include "main.h"
/**
 * _isalpha - Check main
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */

int _isalpha(int c)
{
char i, j;
int isalpha = 0;

for (i = 'a' ; i <= 'z' ; i++)
	{
	if (i == c)
	{
		isalpha = 1;
		continue;
	}
	for (j = 'A' ; j <= 'Z' ; j++)
	{
		if (j == c)
		isalpha = 1;
	}
	}
return (isalpha);

}
