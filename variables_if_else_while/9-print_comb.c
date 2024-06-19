#include <stdio.h>

/**
 * main - Main function
 *
 * Return : Always 0 (Success)
 */

int main(void)
{
	int number = 0;
	for (number = 48; number <= 57; number++)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
