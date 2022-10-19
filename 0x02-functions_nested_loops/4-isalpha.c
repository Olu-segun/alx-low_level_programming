#include "main.h"
/**
 * _isalpha: A function that checks for alphabetic character.
 *
 * @c: The character to be checked.
 *
 * Return:  1 if c a is letter , 0 otherwise.
 */

int _isalpha(int c)
{
	int x;

	for ((x = 'a'); x <= 'z'; x++) ||
	    ((x = 'A'); x <= 'Z'; x++);

	if (c == x)
		return (1);
	else
		return (0);
}
