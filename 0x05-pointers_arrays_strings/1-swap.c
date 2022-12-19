#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: First integer to be input
 * @b: Second integer to be input
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
