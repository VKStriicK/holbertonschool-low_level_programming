#include "main.h"

/**
 * print_triangle - Main function
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int i, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
		{
			_putchar (' ');
		}
		for (j--; j < size; j++)
		{
			_putchar(35)
		}
		if (i < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
