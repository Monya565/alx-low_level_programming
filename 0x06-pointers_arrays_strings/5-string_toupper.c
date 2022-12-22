#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: str to be used.
 * Return: char
 */
char *string_toupper(char *str)
{

	int i;

i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}
