#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t linked list.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prev;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

prev = *head;
for (i = 0; prev && i < index - 1; i++)
prev = prev->next;

if (prev == NULL || prev->next == NULL)
return (-1);

temp = prev->next;
prev->next = temp->next;
free(temp);

return (1);
}
