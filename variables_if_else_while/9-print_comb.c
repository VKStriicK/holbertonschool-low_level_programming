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
		if (number == 57)
		{
			putchar(number);
		}
		else
		{
			putchar(number);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
