#include <stddef.h>
char *_strstr(char *haystack, char *needle)
{
/* Locates a substring */
char *h, *n;
while (*haystack)
{
h = haystack;
n = needle;
while (*h && *n && (*h == *n))
{
h++;
n++;
}
if (!*n)
return haystack;
haystack++;
}
return NULL;
}
