#include "main.h"

/**
 * puts_half - Main function
 *
 * @str: The string to print half
 */

void puts_half(char *str)
{
	int i = 0;
	int a = (i / 2);

	while (str[i] != '\0')
	{
		for (a; a <= i; a++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
