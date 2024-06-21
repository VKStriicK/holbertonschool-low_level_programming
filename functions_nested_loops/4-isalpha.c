#include "main.h"

/**
 * _isalpha - Checks for letter, uppercase or lowercase
 * @c: character to be checked
 *
 * Return: 1 if it's a letter, 0 if not
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
