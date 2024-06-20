#include "main.h"

/**
 * print_alphabet_x10 - Main function to print 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
