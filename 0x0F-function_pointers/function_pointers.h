#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h> /* for size_t */

/* Task 0: Function prototypes */
void print_name(char *name, void (*f)(char *));

/* Task 1: Function prototypes */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Task 2: Function prototypes */
int int_index(int *array, int size, int (*cmp)(int));

/* Task 3: Function prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
