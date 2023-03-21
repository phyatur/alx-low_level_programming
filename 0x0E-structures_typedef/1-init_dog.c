#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 *
 * @d : pointer to struct
 * @name: name as struct member
 * @age: age as struct member
 * @owner: owner as struct member
 *
 * Return : nothing(void)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
