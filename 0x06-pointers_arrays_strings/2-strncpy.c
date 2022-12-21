#include "main.h"
/**
 * _strncpy - returns copies string.
 * @dest: str to be used.
 * @src: str to be used.
 * @n: max number of copies.
 *
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
