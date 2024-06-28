#include "main.h"
#include <stdio.h>

/**
 * print_array - Main function
 *
 * @a: The array of integers
 * @n: The number of elements of the array
 */

void print_array (int *a, int n)
{
	int lenght = 0;

	while (a[lenght] != '\0')
	{
		lenght++;
	}

	for (lenght = 0; lenght < n; lenght++)
	{
		printf("%d", a[lenght]);
		if (lenght != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
