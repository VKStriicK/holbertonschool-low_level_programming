#include "main.h"

/**
 * leet - Main function
 * @s: The string to encode
 *
 * Return: The string after modifications
 */

char *leet(char *s)
{
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char numbers[] = {'4', '3', '0', '7', '1'};
	int lenght = 0;
	int i = 0;

	while (s[lenght] != '\0')
	{
		for (i = 0; numbers[i] != '\0'; i++)
		{
			if (s[lenght] == letters[i] || s[lenght] == letters[i] - 32)
			{
				s[lenght] = numbers[i];
			}
		}
		lenght++;
	}

	return (s);
}
