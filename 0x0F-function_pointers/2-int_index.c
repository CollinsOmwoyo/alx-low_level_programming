#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
if (array && cmp && size > 0)
{
for (int i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return i;
}
}
}
return -1;
}
