#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate.
 *
 * Return: a pointer to the duplicated string, or NULL if str is NULL or
 * if insufficient memory was available.
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;

if (str == NULL)
return (NULL);

for (len = 0; str[len] != '\0'; len++)
;

dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);

for (i = 0; i < len; i++)
dup[i] = str[i];
dup[len] = '\0';

return (dup);
}
