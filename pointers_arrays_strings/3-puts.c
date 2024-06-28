#include "main.h"

/**
 * _puts - Main function
 *
 * @str: The string to return
 */

void _puts(char *str)
{
	int i = 0;

	while (str(i) != '0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
