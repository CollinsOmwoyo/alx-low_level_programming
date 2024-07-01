#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no numbers are found
 */
int _atoi(char *s)
{
int sign = 1;  /* To handle negative numbers */
unsigned int result = 0;  /* Using unsigned to avoid overflow issues */

/* Skip non-numeric characters */
while (*s && (*s < '0' || *s > '9'))
{
if (*s == '-')
{
            sign = -sign; 
}
s++;
}

/* Convert the numeric part of the string */
while (*s && (*s >= '0' && *s <= '9'))
{
result = result * 10 + (*s - '0');
s++;
}

return (sign * result);
}
