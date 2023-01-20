#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the character \.
 * @n: The number of \ characters to be printed.
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int len;
	int sp;

	if (n > 0)
	{
		for (len = 1; len <= n; len++)
		{
			for (sp = 1; sp <= len; sp++)
			{
				if (sp != len)
					_putchar(' ');
				if (sp == len)
				{
					_putchar(92);
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
