#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 *
 * @s: The string to count length.
 *
 * Return: String length.
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
