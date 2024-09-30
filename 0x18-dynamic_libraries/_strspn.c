#include <string.h>
unsigned int _strspn(char *s, char *accept)
{
/* Gets the length of a prefix substring */
unsigned int len = 0;
while (*s && strchr(accept, *s++))
len++;
return len;
}
