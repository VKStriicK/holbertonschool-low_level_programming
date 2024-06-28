#include "main.h"

/**
 * rev_string - Main function
 *
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i != 0)
	{
		*s =s[--i];
	}
}
