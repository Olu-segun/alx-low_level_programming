#include "main.h"
/**
 * _strcpy - Copy a string
 * @dest: A buffer to copy the string to
 * @src: The source string to copy.
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
