#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to a character array for the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a character array for the owner's name
 *
 * Description: This structure represents a dog.
 * Including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
