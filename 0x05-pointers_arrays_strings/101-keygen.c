#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
int sum = 0;
char password[84];
int i = 0;

srand(time(0));

while (sum < 2772)
{
password[i] = (rand() % 78) + 48;
sum += password[i];
if (sum > 2772)
{
sum -= password[i];
i--;
}
i++;
}
password[i] = '\0';

if (sum == 2772)
{
printf("%s", password);
}
return (0);
}
