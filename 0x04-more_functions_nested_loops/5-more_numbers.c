#include "main.h"
/**
 * more_numbers - Prints numbers 0-14 ten times
 */
void more_numbers(void)
{
int i, num;

for (i = 0; i < 10; i++)
{
for (num = 0; num <= 14; num++)
{
if (num >= 10)
_putchar('1');
_putchar(num % 10 + '0');
}
_putchar('\n');
}
}
