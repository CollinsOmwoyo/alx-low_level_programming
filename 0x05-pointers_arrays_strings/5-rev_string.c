#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 */
void rev_string(char *s)
{
int length = 0, i = 0;
char temp;

while (s[length])
length++;

while (i < length / 2)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
i++;
}
}
