#include "main.h"
/**
 *  _islower - Entry Point.
 *
 *  Desc: A function that checks for lowercase character.
 *
 *  Return: Always 0 (Success)
 */

int _islower(int c)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)

		if (c == 'a')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
