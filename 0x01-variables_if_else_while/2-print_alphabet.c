#include <stdio.h>
/**
 * main - Print alphabet using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		++alp;
	}
	putchar('\n');
	return (0);
}
