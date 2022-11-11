#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -> Does memory allocation using malloc
 * @b: The number of bytes to be allocate
 * Return: A pointer to be allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	
	return (mem);
}
