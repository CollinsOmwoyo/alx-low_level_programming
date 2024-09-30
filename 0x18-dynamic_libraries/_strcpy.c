char *_strcpy(char *dest, char *src)
{
/* Copies the string src to dest */
char *temp = dest;
while (*src)
*temp++ = *src++;
*temp = '\0';
return dest;
}
