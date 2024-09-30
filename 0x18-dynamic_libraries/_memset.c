char *_memset(char *s, char b, unsigned int n)
{
/* Fills memory with a constant byte */
char *temp = s;
while (n--)
*temp++ = b;
return s;
}
