#include "main.h"

/*
 * print_line - Main function
 * @n: Number of times the character '_' is printed
 *
 * Return: The line
 */

void print_line(int n)
{
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		if (n != 0)
		{
			_putchar('_');
		}
	}
	for (i = 0; i >= n; i++)
	{
		if (n != 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
