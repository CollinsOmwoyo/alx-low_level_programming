#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && action)
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
}
