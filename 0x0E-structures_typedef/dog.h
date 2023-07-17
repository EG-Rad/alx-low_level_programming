#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to a character array for the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a character array for the owner's name
 *
 * Description: This structure represents a dog, including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Define dog_t as a new name for the struct dog type */
typedef struct dog dog_t;

/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
void free_dog(dog_t *d);

#endif /* DOG_H */

