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
	for (c = 97; c <= 122; c++)

		if (c >= 97 && c <= 122)
		
			return (1);
		
		else
		
			return (0);
		
}
