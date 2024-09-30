int _strcmp(char *s1, char *s2)
{
/* Compares two strings */
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return *(unsigned char *)s1 - *(unsigned char *)s2;
}
