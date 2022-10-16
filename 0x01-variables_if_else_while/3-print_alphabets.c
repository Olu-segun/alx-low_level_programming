#include <stdio.h>
/**
 *  main - Print alphabet in lowercase, and then in uppercase.
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';
	char ALP = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		++alp;
	}

	while (ALP <= 'Z')
	{
		putchar(ALP);
		++ALP;
	}
	putchar('\n');
	return (0);
}
