#include "main.h"
/**
 * swap_int -  swaps the values of two integers.
 * @a: int to be swapped.
 * @b: int to be swapped.
 *
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int x;
	
	x = *a;
	*a = *b;
	*b = x;
}
