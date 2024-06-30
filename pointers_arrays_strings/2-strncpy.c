#include "main.h"

/**
 * *_strncpy - Main function
 * @dest: The destination variable to copy
 * @src: The variable to copy
 * @n: Number of bytes from src
 *
 * Return: The pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0, i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
