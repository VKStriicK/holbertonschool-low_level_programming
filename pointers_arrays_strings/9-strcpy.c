#include "main.h"

/**
 * *_strcpy - Main function
 *
 * @dest: The destination variable to copy
 * @src: The variable to copy
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int lenght = 0;

	while (src[lenght])
	{
		dest[lenght] = src[lenght];
		lenght++;
	}

	dest[lenght] = '\0';

	return (dest);
}
