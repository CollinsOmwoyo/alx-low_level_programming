int _atoi(char *s)
{
/* Converts a string to an integer */
int res = 0, sign = 1;

if (*s == '-')
{
sign = -1;
s++;
}

while (*s >= '0' && *s <= '9')
{
res = res * 10 + (*s - '0');
s++;
}

return res * sign;
}
