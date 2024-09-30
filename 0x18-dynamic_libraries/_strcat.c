char *_strcat(char *dest, char *src)
{
/* Concatenates src to dest */
char *temp = dest;
while (*temp)
temp++;
while ((*temp++ = *src++));
return dest;
}
