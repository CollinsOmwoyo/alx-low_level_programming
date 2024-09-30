char *_strncat(char *dest, char *src, int n)
{
/* Concatenates up to n bytes from src to dest */
char *temp = dest;
while (*temp)
temp++;
while (n-- && (*temp++ = *src++));
*temp = '\0';
return dest;
}
