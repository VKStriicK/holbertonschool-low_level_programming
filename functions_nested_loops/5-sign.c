#include "main.h"

/**
 * print_sign - Main function
 *@n: The number
 *
 * Return: 1 if n is greater than 0, 0 if n = o, -1 if n is less than 0
 */

int print_sign(int n)
{
	int r;

	if (n >= 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n <= 0)
	{
		_putchar('-');
		r = 0;
	}
	else
	{
		_putchar('0');
		r = -1;
	}
	_putchar(',');
	_putchar(' ');
	return (r);
}
