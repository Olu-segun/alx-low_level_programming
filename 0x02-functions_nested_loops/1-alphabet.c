#include "main.h"
/**
 * print_alphabet - Entry Point.
 *
 * Desc; A function that prints the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet = 'a'
		while (alphabet <= 'z')
		{
			-putchar(alphabet);
			++alphabet;
		}
	_putchar('\n');
	return (0);
}
