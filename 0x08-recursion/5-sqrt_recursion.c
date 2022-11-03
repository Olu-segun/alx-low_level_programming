#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: parameter to be sqrt
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	int square = i * i;

	if (square > n)
		return (-1);

	if (square == n)
		return (i);
	return (find_sqrt(n, i + 1));
}
