#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9,
 * and not 2 andd 4.
 *
 * Return: void.
 *
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
