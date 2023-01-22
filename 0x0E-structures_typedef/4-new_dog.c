#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		new = malloc(sizeof(char) * name_l);

		if (name == NULL)
			return (NULL);

		new->name = malloc(sizeof(char) * name_l);

		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return (NULL);
		}

		new->name = _strcpy(new->name, name);
		new->name = _strcpy(new->owner, owner);
		new->age = age;
	}

	return (new);
}

/**
 * _strlen - Returns the length of a string
 * @s: string to count
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
