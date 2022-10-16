#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp = 'z';

		while (alp >= 'a')
		{
			putchar(alp);
			--alp;
		}
	putchar('\n');
	return (0);
}
