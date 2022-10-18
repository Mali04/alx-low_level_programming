#include "main.h"

/**
 * jack_bauer - Check main
 * Description: function prints every minute in one day
 * Return: Nothing
 */

void jack_bauer(void)
{
int h, hh, m, mm;
for (h = 0; h < 2; h++)
{
	for (hh = 0; hh <= 9; hh++)
	{
		for (m = 0; m <= 5; m++)
		{
			for (mm = 0; mm <= 9; mm++)
			{
				_putchar(h + '0');
				_putchar(hh + '0');
				_putchar(':');
				_putchar(m + '0');
				_putchar(mm + '0');
				_putchar('\n');
			}
		}
	}


}
for (hh = 0; hh <= 3; hh++)
{
	for (m = 0; m <= 5; m++)
	{
		for (mm = 0; mm <= 9; mm++)
		{
			_putchar(2 + '0');
			_putchar(hh + '0');
			_putchar(':');
			_putchar(m + '0');
			_putchar(mm + '0');
			_putchar('\n');
		}
	}
}

}
