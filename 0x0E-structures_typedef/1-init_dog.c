#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize a dog data structure.
 * @d: pointer to dog struct.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner
 *
 * Return: Pointer to struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
