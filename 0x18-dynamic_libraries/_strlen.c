int _strlen(char *s)
{
/* Returns the length of the string */
int len = 0;
while (*s++)
len++;
return len;
}
