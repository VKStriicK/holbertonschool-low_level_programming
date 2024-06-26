#include "main.h"

/**
 * print_square - Main function
 * @size: The size of the square
 */

void print_square(int size)
{
	int i, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
