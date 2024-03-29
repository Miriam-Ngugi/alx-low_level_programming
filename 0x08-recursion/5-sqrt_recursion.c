#include "main.h"

/**
 * helper - finds the sqrt of two numbers
 * @a: the number
 * @b: the number to test for the sqrt of @a
 *
 * Return: square root
 */
int helper(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (helper(a, b + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: the number to return the sqrt of
 *
 * Return: the sqrt of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
