#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the addition of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The addition of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - outputs the difference of two numbers.
 * @a: The first input.
 * @b: The second input
 * Return: The subtraction of a from b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - outputs the product of two numbers.
 * @a: The first input.
 * @b: The second input
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - provide the division of two numbers.
 * @a: 1st num.
 * @b: 2nd  num.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The 1st num.
 * @b: The 2nd num.
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
