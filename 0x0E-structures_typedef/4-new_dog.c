#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog
 *
 * @name: name of dog
 * @age: name of dog
 * @owner: owner of dog
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namelength, ownerlength, i;
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	namelength = ownerlength = 0;
	while (name[namelength++])
		;
	while (owner[ownerlength++])
		;
	d->name = malloc(namelength * sizeof(d->name));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= namelength; i++)
		d->name[i] = name[i];
	d->age = age;
	d->owner = malloc(ownerlength * sizeof(d->owner));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= ownerlength; i++)
		d->owner[i] = owner[i];
	return (d);
}
