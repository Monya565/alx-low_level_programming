#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100.
 *
 * Description:  for multiples of three print Fizz,
 * for the multiples of five print Buzz,
 * multiples of both three and five print FizzBuzz.
 *
 * Return: 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
