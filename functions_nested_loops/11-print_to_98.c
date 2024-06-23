#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - main function
 * @n: Number to start printing
 *
 * Return: All natural numbers from n to 98
 */

void print_to_98(int n)
{
	for (; n < 98; n --)
	{
		printf("%d, ", n);
	}
	for (; n > 98; n++)
	{
		printf("%d, ", n);
	}
	printf("%d\n", n);
}
