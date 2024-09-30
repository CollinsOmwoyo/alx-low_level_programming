char *_strpbrk(char *s, char *accept)
{
/* Searches a string for any of a set of bytes */
while (*s)
{
if (strchr(accept, *s))
return s;
s++;
}
return NULL;
}
