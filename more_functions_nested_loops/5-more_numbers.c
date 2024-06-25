#include "main.h"

/**
 * more_numbers - Main function
 *
 * Return 10 times all numbers from 0 to 14
 */

void more_numbers(void)
{
	int n = 0;
	int times = 0;

	for (times = 0; times <= 10; times++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
