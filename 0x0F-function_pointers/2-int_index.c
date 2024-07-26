#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used to compare values.
 *
 * Return: The index of the first element for which the cmp function
 *         does not return 0. If no element matches or size <= 0,
 *         returns -1.
 *
 * Description: This function iterates through the array and applies
 *               the comparison function cmp to each element. It returns
 *               the index of the first element that matches the condition.
 */
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
