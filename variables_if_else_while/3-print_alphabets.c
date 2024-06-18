#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char alphabet, ALPHABET = 'a', 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
	return (0);
}
