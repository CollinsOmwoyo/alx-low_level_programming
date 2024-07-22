#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog struct
 * @d: Pointer to the dog struct
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
