#include  "main.h"
/**
 *  _islower - Entry Point.
 *
 *  Desc: A function that checks for lowercase character.
 *
 * @c: The character to be checked.
 *
 *  Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	int x;

	for (x = 97; x <= 122; x++)
	{

		if (c == x)
		{
			return (1);
		}
	}
	return (0);
}
