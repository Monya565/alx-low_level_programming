#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: char to be checked.
 *
 * Return: 0.
 */
int _strlen(char *s)
{
	char x = 0;

	while (*s[x] != '\0')
		x++;
	return (x);
}
