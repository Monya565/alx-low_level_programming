#include "main.h"
/**
 * print_alphabet_x10 -prints 10 times the alphabet, in lowercase.
 * Return: 0.
 */
void print_alphabet_x10(void)
{
int count = 0;
char let;
while(count++ < 10)
{
for (let = 'a'; let <= 'z'; let++)
_putchar(let);
_putchar('\n'); 
}
}
