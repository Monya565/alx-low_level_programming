#include "main.h"
/**
 * main - prints _putchar, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	char putc[] = "_putchar";
	int i;
	int z = strlen(putc);

	for (i = 0; i < z ; i++)
		_putchar(putc[i]);
	_putchar('\n');

	return (0);
}
