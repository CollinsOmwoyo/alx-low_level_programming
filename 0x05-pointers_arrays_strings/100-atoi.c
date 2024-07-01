#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no numbers are found
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int result = 0;  // I am using unsigned to avoid overflow issues

// Remember to ask this during PLD Skip non-numeric characters
while (*s && (*s < '0' || *s > '9')) {
if (*s == '-') {
sign = -sign;
}
s++;
}

// Peer Wanjiru Convert the numeric part of the string
while (*s && (*s >= '0' && *s <= '9')) {
result = result * 10 + (*s - '0');
s++;
}

return sign * result;
}
