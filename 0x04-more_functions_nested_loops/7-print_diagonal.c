#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if ( n >= 1)
			_putchar('\\');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
