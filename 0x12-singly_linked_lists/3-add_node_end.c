#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the pointer to the head of the list.
 * @str: string to be added to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp = *head;
char *dup_str;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

/*Duplicate the string and check for success*/
dup_str = strdup(str);
if (dup_str == NULL)
{
free(new_node);
return (NULL);
}

/*Initialize the new node*/
new_node->str = dup_str;
new_node->len = strlen(dup_str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{

while (temp->next != NULL)
{
temp = temp->next;
}
/*Add the new node at the end*/
temp->next = new_node;
}

return (new_node);
}
