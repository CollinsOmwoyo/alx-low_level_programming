#include "function_pointers.h"
/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: A pointer to the function used to print the name.
 *
 * Description: This function calls the function pointed to by f
 *               to print the given name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
