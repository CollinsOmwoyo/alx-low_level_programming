#include "lists.h"
/**
 * print_dlistint - elements of a dlistint_t list.
 * @h: head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *current = h;

while (current)
{
printf("%d\n", current->n);
current = current->next;
count++;
}
return count;
}
