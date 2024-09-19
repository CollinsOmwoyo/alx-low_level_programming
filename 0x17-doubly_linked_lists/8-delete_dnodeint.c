#include "lists.h"
/**
 * delete_dnodeint_at_index - node deletion
 * @head: A double pointer to the head of the dlistint_t list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int count = 0;

if (!head || !*head)
return -1;

if (index == 0)
{
*head = current->next;
if (*head)
    (*head)->prev = NULL;
free(current);
return 1;
}

while (current && count < index)
{
current = current->next;
count++;
}

if (!current)
return -1;

if (current->prev)
current->prev->next = current->next;

if (current->next)
current->next->prev = current->prev;

free(current);
return 1;
}
