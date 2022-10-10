#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes the details of a dog
 * @d: pointer to an instance of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
