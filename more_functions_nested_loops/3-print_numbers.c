#include "main.h"

/**
 * print_numbers - Main function
 *
 * Return: All the numbers from 0 to 9
 */

void print_numbers(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
