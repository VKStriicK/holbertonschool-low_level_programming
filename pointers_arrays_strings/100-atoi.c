#include "main.h"

/**
 * _atoi - Main function
 *
 * @s: The string to convert
 *
 * Return: The integer
 */

int _atoi(chars *s)
{
	int lenght = 0;
	int n = 0;

	for (n = 0; n < s[lenght]; lenght++)
	{
		if ((n <= 57) && (n >= 48))
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
