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
	int c;

	for ((c = 'a', c <= 'z', c++) || (c = 'A', c <= 'Z', c++))

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
