char *_strncpy(char *dest, char *src, int n)
{
/* Copies up to n bytes from src to dest */
char *temp = dest;
while (n-- && (*temp++ = *src++));
return dest;
}
