#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to a character array for the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a character array for the owner's name
 *
 * Return: None (void)
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
