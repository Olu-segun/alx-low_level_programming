#include "main.h"
/**
 * print_line - A function that draws a straight line in the terminal.
 *
 * @n: The number of _ characters to be printed.
 *
 * Return; void
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}