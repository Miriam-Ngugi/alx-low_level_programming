#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to reverse
 * @n: the number of elements in the array
 *
 * Return: nothing
 *
 */
void reverse_array(int *a, int n)
{
	int temp; /* holds value*/
	int j; /* counter*/
	int i = n - 1; /* reverse counter*/

	for (j = 0; j < i; j++)
	{
		temp = a[j];
		a[i] = a[i];
		a[i] = temp;
		i--;
	}
}
