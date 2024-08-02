#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @head: Double pointer to the head of the list.
 * @str: String to be added to the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp = *head;
size_t len;

new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
exit(1);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
exit(1);
}

for (len = 0; str[len]; len++)
;

new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
}

return new_node;
}
