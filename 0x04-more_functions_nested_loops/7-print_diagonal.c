#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the character \.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int len, sp;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (sp = 0; sp < len; sp++)
				_putchar(' ');
			_putchar('\\');

			if (len == -1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
