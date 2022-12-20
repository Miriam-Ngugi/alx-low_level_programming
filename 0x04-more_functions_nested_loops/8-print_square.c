#include "main.h"

/**
 * print_square - prints a square using the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int hei, wid;

	if (size > 0)
	{
		for (hei = 0; hei < size; hei++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hei == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
