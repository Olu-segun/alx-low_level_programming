#include "function_pointers.h"

/**
 * print_name - Prints the name supplied to it
 * @name: A pointer to the name to be printer
 * @f: A function pointer to the printing logic
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
