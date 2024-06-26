#include <stdio.h>

/**
 * main - Main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int mult3 = 0;
	int mult5 = 0;

	for (i = 1; i <= 100; i++)
	{
		mult3 = i % 3;
		mult5 = i % 5;

		if ((mult3 == 0) && (mult5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (mult3 == 0)
		{
			printf("Fizz");
		}
		else if (mult5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
