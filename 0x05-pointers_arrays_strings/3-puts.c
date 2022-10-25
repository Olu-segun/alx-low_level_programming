#include "main.c"
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * @str: The string to be printed.
 *
 * Return;  Always 0.
 */

void _puts(char *str)
{
	char *str = 0;

	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
