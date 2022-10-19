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
	int c;

	for (c = 97; c <= 122; c++)

		if (c >= 97 && c <= 122)
		{
			return (1);
		}
		return (0);
}
