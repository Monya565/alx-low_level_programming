#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers.
* @a: int to be used.
* @n: array length.
*
* Return: 0.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
printf("\n");
}
