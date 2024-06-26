#include "main.h"

/**
 * print_diagonal - Main function
 * @n: Number of \
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar(92);
			}
			else
			{
				_putchar(' ');
			}
		}
	}	
	_putchar('\n');
}
