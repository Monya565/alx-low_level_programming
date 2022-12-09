#include <stdio.h>
/**
 * main - Prints any alphabet in lowercase then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char letter, letter1;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter1 = 'A'; letter1 <= 'Z'; letter1++)
putchar(letter1);
putchar('\n');
return (0);
}
