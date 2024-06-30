#include "main.h"

/**
 * string_toupper - Main function
 *
 * @str: The string to transform
 *
 * Return: The string in uppercase
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i]-= 32;
		}
		i++;
	}

	return (str);
}
