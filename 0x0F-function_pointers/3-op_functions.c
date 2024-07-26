#include "3-calc.h"
/**
 * get_op_func - Selects the correct function to perform the operation
 *                requested by the user.
 * @s: The operator.
 *
 * Return: A pointer to the function that corresponds to the operator
 *         given as a parameter. Returns NULL if the operator is not
 *         recognized.
 *
 * Description: This function maps the operator string to the corresponding
 *               function. It iterates through a predefined list of operators
 *               and functions and returns the appropriate function pointer.
 */
int op_add(int a, int b) { return a + b; }
int op_sub(int a, int b) { return a - b; }
int op_mul(int a, int b) { return a * b; }
int op_div(int a, int b) { return a / b; }
int op_mod(int a, int b) { return a % b; }
