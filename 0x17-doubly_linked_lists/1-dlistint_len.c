#include "lists.h"
/**
 * dlistint_len - elements in a dlistint_t list.
 * @h: head of the dlistint_t list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *current = h;

while (current)
{
count++;
current = current->next;
}
return count;
}
