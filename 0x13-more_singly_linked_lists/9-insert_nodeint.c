#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Double pointer to the head of the list.
 * @idx: The index where the new node should be added.
 * @n: The integer value to be added to the new node.
 * Return: Pointer to the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current;
unsigned int i;

if (idx == 0)
return (add_nodeint(head, n));

current = *head;
for (i = 0; current && i < idx - 1; i++)
current = current->next;

if (current == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = current->next;
current->next = new_node;

return (new_node);
}
