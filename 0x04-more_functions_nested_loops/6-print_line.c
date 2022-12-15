#include "main.h"
/**
 * print_line - draws straight line.
 * @n: number of times.
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;
	
	for (i = 0; i <= n; i++)
	{
		if (i <= 0)
		_putchar('\n');
		else
		_putchar('_');
	}
	_putchar('\n');
}
