#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory associated with a dog
 * @d: Pointer to the dog structure to free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);

		free(d);
	}
}
