#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes the dog structure
 * @d: A dog structure
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
