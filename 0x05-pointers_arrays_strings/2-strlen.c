#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: string pointer to passed to this function
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s++)
		x++;

	return (x);

}
