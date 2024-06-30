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

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;

		dest[i] = '\0';

		return (dest);
	}
}
