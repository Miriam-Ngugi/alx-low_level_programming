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
