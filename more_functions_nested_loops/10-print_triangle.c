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
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
