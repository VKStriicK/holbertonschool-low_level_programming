#include "main.h"

/**
 * main - Main function
 *@c: character to be checked
 *
 * Return: 1 if it's lowercase, 0 if not
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
