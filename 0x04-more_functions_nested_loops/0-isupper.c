#include "main.h"
/**
 * _isupper - Entry point.
 *
 * @c: The character to be checked.
 *
 * _isupper: A function that checks for uppercase character.
 *
 * Return: 1 if c is uppercase, otherwise return 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
