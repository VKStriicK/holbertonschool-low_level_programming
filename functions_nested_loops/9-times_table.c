#include "main.h"

/**
 * times_table - Main function
 *
 * Return: The 9 times table
 */

void times_table(void)
{
	int i;
	int n;

	for (n = 0; n <= 10; n++)
	{
		for (i = 0; i <= 10; i++)
		{
			_putchar(i * n + '0');
			_putchar (',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
