#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The minimum value in the array
 * @max: The maximum value in the array
 * Return: A pointer
 */
int *array_range(int min, int max)
{
int *array;
int i, size;

if (min > max)
return (NULL);

size = max - min + 1;

array = malloc(size * sizeof(int));
if (array == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
array[i] = min;

return (array);
}
