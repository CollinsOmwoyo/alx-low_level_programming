#include "lists.h"

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
