#include "main.h"

/**
 * rev_string - Main function
 *
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	int i, a, b = 0;
	char temp = 0;

	while (s[i] != ('\0'))
	{
		i++;
	}

	for (a = 0, b = i - 1; a < (i / 2); a++, b--)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}
}
