#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *new_name, *new_owner;
int name_len = 0, owner_len = 0, i;

if (name == NULL || owner == NULL)
return (NULL);

while (name[name_len])
name_len++;
while (owner[owner_len])
owner_len++;

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
new_name = malloc(name_len + 1);
if (new_name == NULL)
{
free(d);
return (NULL);
}

new_owner = malloc(owner_len + 1);
if (new_owner == NULL)
{
free(new_name);
free(d);
return (NULL);
}

for (i = 0; i <= name_len; i++)
new_name[i] = name[i];
for (i = 0; i <= owner_len; i++)
new_owner[i] = owner[i];

d->name = new_name;
d->age = age;
d->owner = new_owner;

return (d);
}
