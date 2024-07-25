#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializing a variable of type struct dog
 * @d: pointer to the struct dog being initialized
 * @name: name to initialize dog with
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Always 0 on success
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
