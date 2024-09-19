#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *current = h;

while (current)
{
count++;
current = current->next;
}
return count;
}
