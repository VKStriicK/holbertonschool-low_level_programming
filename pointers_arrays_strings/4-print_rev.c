#include "main.h"

/**
 * print_rev - Main function
 *
 * @s: The string to print in reverse
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
