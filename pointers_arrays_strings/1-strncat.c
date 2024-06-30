#include "main.h"

/**
 * *_strncat - Main function
 * @dest: String after being concatenate
 * @src: String to be concatenate
 * @n: Number of bytes from src
 *
 * Return: 
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
