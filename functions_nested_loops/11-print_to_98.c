#include "main.h"

/**
 * print_to_98 - main function
 * @n: Number to start printing
 *
 * Return: All natural numbers from n to 98
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n <= 98; n --)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n < 98)
	{
		for (; n >= 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		_putchar (n);
	}
}
