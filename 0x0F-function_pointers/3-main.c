#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Performs simple operations based on user input.
 * @argc: The number of command-line arguments.
 * @argv: The command-line arguments.
 *
 * Return: 0 on success.
 *
 * Description: This function parses the command-line arguments to
 *               perform arithmetic operations. It validates input,
 *               selects the appropriate function, and prints the result.
 */
int main(int argc, char *argv[])
{
int (*op_func)(int, int);
int a, b;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
op_func = get_op_func(argv[2]);

if (!op_func)
{
printf("Error\n");
exit(99);
}

if ((*argv[2] == '/' && b == 0) || (*argv[2] == '%' && b == 0))
{
printf("Error\n");
exit(100);
}

printf("%d\n", op_func(a, b));
return 0;
}
