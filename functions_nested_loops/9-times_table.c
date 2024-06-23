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
	int result:

	for (n = 0; n < 10; n++)
	{
		_putchar('0');

		for (i = 1; i < 10; i++)
		{
			_putchar(',');
			_putchar(' ');

			result = (i * n);
			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
