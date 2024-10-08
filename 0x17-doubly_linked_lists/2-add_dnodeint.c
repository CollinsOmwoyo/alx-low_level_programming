#include "lists.h"

/**
 * add_dnodeint - Adds a new node
 * @head: head of the dlistint_t list.
 * @n: integer value to be added
 *
 * Return: The address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return NULL;

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;

if (*head)
(*head)->prev = new_node;

*head = new_node;
return new_node;
}
