#include "main.h"

/**
 * swap_int - Main function
 * @a: The first int to swap
 * @b: The second int to swap
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
