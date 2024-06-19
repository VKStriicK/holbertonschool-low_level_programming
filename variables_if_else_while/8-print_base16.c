#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;
	char letter = 'a';
	for (; number <= 58; number++)
	{
		putchar(number);
	}
	for (; letter <= 'f'; letter ++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
