#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int x, n_size, o_size;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	n_size = sizeof(name) + 1;
	o_size = sizeof(owner) + 1;
	new_dog->name = malloc(n_size);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (x = 0; name[x] != '\0'; x++)
		new_dog->name[x] = name[x];
	new_dog->name[x] = '\0';

	new_dog->age = age;

	new_dog->owner = malloc(o_size);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (x = 0; owner[x] != '\0'; x++)
		new_dog->owner[x] = owner[x];
	new_dog->owner[x] = '\0';

	return (new_dog);
}
