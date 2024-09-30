char *_memcpy(char *dest, char *src, unsigned int n)
{
/* Copies memory area */
char *temp = dest;
while (n--)
*temp++ = *src++;
return dest;
}
