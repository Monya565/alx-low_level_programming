#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @src: str to be used.
 * @dest: str to be used.
 *
 * Return: char..
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_l = 0;
	while (dest[i++])
		dest_l++;
	for (i = 0; src[i]; i++)
		dest[dest_l++] = src[i];
	return (dest);
}
