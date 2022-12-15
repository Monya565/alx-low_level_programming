#include "main.h"
/**
 * is_upper - checks for uppercase charcter
 * @c: char to be checked.
 *
 * Return:1 if it is uppercase, otherwise 0
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
