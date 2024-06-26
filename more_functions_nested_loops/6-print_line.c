#include "main.h"

/**
 * print_line - print n times _
 * @n: Number of times the character '_' is printed
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
