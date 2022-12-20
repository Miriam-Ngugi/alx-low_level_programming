#include "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @a: The first integer
 * @b: The second integer
 * @c: The third integer
 * Return: The largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
