#include "main.h"

/**
 * _isalpha - Return 1 if c is a lowercase or uppercase letter.
 *
 * @c: The int to be printed
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
