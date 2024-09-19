#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node.
 * @head: pointer to the head.
 * @index: The index of the node to return.
 *
 * Return: The address of the node, or NUll.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *current = head;

while (current)
{
if (count == index)
return current;
current = current->next;
count++;
}
return NULL;
}
