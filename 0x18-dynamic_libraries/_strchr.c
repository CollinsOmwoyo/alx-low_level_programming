char *_strchr(char *s, char c)
{
/* Locates a character in a string */
while (*s)
{
if (*s == c)
return s;
s++;
}
return (*s == c) ? s : NULL;
}
