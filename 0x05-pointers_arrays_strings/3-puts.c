#include "main.h"
/**
 * _puts - that prints a string.
 * @str: str to be returned.
 *
 * Return: 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

