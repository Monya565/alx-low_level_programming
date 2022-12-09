#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 * Return: Always 0.
 */
int main(void)
{
int number;
for (number = 0; number < 10; number++)
putchar((number % 10) + '0');
putchar('\n');
return (0);
}
