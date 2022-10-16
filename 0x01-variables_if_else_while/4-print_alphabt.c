#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase except letter 'e' and 'q'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'z')
			putchar(alp);
	}
	putchar('\n');
	return (0);
}
