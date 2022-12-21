#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @src: str to be used.
 * @dest: str to be used.
 * @n: number of bytes.
 *
 * Return: char.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_l = 0;

	while (dest[i++])
		dest_l++;
	for (i = 0; src[i] && i < n ; i++)
		dest[dest_l++] = src[i];

	return (dest);
}
