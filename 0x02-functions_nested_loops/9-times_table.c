#include "main.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Return: Times table.
 *
 */

void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = j * i;
			if (k > 9)
			{
				l = k % 10;
				m = (k - l) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(m + '0');
				_putchar(l + '0');
			}
			else
			{
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}



