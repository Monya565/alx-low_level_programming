#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * Return : 0.
 */
void print_alphabet(void)
{
char let;
for (let = 'a'; let <= 'z'; let++)
_putchar(let);
_putchar('\n');
return;
}
