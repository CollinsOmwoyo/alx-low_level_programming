#include <stdio.h>
/**
 * before_main -
 */
/* This function will be executed before main */
void before_main(void) __attribute__((constructor));

/* Define the function to print the message */
void before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
