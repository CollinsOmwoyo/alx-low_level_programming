#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: pointer to the string to print
 */
void puts_half(char *str)
{
int length = 0, i;

while (str[length])
length++;

i = (length % 2 == 0) ? length / 2 : (length + 1) / 2;

while (str[i])
_putchar(str[i++]);

_putchar('\n');
}
