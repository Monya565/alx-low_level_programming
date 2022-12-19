#include "main.h"
/**
* rev_string - reverses a string.
* _strlen - prints str length.
* @s: str to be reversed.
* Description: _strlen prints str length.
*
* Return: void.
*/
void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = _strlen(s);
	begin = s;
	end = s;

	for (c = 0; c < length - 1; c++)
		end++;

	for (c = 0; c < length / 2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
/**
* _strlen - prints str length.
* @a: str to be printed.
* Return: 0.
*/
int _strlen(char *a)
{
	int x = 0;

	while (a[x] != '\0')
		x++;
	return (x);
}
