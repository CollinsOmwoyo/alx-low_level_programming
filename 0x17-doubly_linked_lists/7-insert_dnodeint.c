#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node.
 * @h: A double pointer to the head of the dlistint_t list.
 * @idx: The index where the new node should be added.
 * @n: The integer value to be added to the new node.
 *
 * Return: The address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
if (idx == 0)
return add_dnodeint(h, n);

dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *current = *h;
unsigned int count = 0;

if (!new_node)
return NULL;

new_node->n = n;

while (current)
{
if (count == idx - 1)
{
new_node->next = current->next;
new_node->prev = current;
if (current->next)
    current->next->prev = new_node;
current->next = new_node;
return new_node;
}
current = current->next;
count++;
}

free(new_node);
return NULL;
}
