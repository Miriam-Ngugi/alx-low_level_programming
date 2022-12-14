#include "main.h"

/**
 * _islower - Entry Point
 * @c: contains the value to be compared
 * Return: 0, nothing
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
