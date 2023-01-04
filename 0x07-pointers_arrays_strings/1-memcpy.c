#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where the memory will be copied to
 * @n: the number of bytes
 * @src: the memory area to copy from
 *
 * Return: A pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
