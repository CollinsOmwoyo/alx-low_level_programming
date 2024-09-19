#include "lists.h"
/**
 * sum_dlistint - sum of all.
 * @head: A pointer to the head of the dlistint_t list.
 *
 * Return: The sum of the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;

while (current)
{
sum += current->n;
current = current->next;
}
return sum;
}
