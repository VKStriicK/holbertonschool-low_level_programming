#include "main.h"

/**
 * print_diagonal - Main function
 * @n: Number of \
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar(92);
				break;
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
