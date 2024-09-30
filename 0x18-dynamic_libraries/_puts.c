#include "main.h"
void _puts(char *s)
{
/* Prints a string followed by a new line */
while (*s)
_putchar(*s++);
_putchar('\n');
}
