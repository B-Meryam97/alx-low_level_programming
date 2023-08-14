#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a struct called dog.
 * @name: first member.
 * @age: second member.
 * @owner: third member.
 */

struct dog
{
	char *name; /**< The name of the dog */
	float age; /**< The age of the dog */
	char *owner; /**< The owner of the dog */
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
