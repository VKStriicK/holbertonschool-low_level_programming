#include "main.h"

/**
 * reverse_array - Main function
 * @a: Array of integers
 * @n: Number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
