#include "main.h"

/**
 * print_triangle - Prints a triangle using the character #
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int sp, tr;

	if (size > 0)
	{
		for (sp = 1; sp <= size; sp++)
		{
			for (tr = size - sp; tr > 0; tr--)
				_putchar(' ');

			for (tr = 0; tr < sp; tr++)
				_putchar('#');

			if (sp == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
