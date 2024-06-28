#include "main.h"

/**
 * rev_string - Main function
 *
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	int i, a = 0;
	char temp = 0;

	for (i = 0; i < (a / 2); i++)
	{
		temp = s[i];
		s[i] = s[a - i - 1];
		s[a - i - 1] = temp;
	}
}
