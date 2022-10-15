#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - Determines if a number is positive, negative or zero.
 *
 *  Return: Always O (Success)
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		print("%d is  zero\n", n);
	}
	else
	{
		print("%d is negative\n", n);
	}
	return (0),
}
