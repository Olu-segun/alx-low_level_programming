#include "main.h"
/**
 * _isalpha: Entry point.
 *
 * Desc; A function that checks for alphabetic character.
 *
 * @c: The character to be checked.
 *
 * Return:  1 if c a is letter , 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c < 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
