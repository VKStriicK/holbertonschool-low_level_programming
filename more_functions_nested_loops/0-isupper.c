#include "main.h"

/**
 * _isupper - Main function
 * @c: The number to check
 *
 * Return: 1 if c is uppercase, 0 if not
 */

int _isupper(int c)
{
	int r;

	if ((c >= 'a') && (c <= 'z'))
	{
		r = 0;
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		r = 1;
	}
	return (r);
}
