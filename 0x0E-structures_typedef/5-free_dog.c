#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to a character array for the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a character array for the owner's name
 *
 * Return: None (void)
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

/**
 * new_dog - Creates a new dog_t and stores a copy of name and owner
 * @name: Pointer to a character array for the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a character array for the owner's name
 *
 * Return: Pointer to the newly created dog_t, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len, owner_len;

	/* Calculate the lengths of name and owner */
	name_len = strlen(name);
	owner_len = strlen(owner);

	/* Allocate memory for the new dog_t structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name copy */
	name_copy = malloc((name_len + 1) * sizeof(char));
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/* Allocate memory for the owner copy */
	owner_copy = malloc((owner_len + 1) * sizeof(char));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	/* Copy the name and owner to the new memory locations */
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	/* Initialize the new dog_t structure */
	init_dog(new_dog, name_copy, age, owner_copy);

	return (new_dog);
}

/**
 * free_dog - Frees the memory allocated for a dog_t structure
 * @d: Pointer to the dog_t structure to be freed
 *
 * Return: None (void)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}







