#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: The data of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int value;

if (*head == NULL)
return (0);

temp = *head;
value = temp->n;
*head = (*head)->next;
free(temp);

return (value);
}
