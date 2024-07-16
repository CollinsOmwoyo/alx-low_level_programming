#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into it
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
