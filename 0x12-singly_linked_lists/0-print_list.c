#include "lists.h"
#include <unistd.h>

/**
 * print_list - prints all elements of a list_t list.
 * @h: pointer to the head of the list_t list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
if (h->str == NULL)
{
_putchar('[');
_putchar('0');
_putchar(']');
_putchar(' ');
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
_putchar('\n');
}
else
{
char buffer[11];
int len = 0;
int num = h->len;
do {
buffer[len++] = '0' + (num % 10);
num /= 10;
} while (num > 0);
for (int i = len - 1; i >= 0; i--)
_putchar(buffer[i]);
_putchar(' ');
_putchar(h->str[0]);
_putchar('\n');
}
h = h->next;
count++;
}
return count;
}
