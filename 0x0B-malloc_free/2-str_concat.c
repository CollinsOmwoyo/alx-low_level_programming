#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: a pointer to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated.
 * If NULL is passed, treat it as an empty string.
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i, j, len1, len2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (len1 = 0; s1[len1] != '\0'; len1++)
;
for (len2 = 0; s2[len2] != '\0'; len2++)
;

concat = malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (j = 0; j < len2; j++)
concat[len1 + j] = s2[j];
concat[len1 + len2] = '\0';

return (concat);
}
