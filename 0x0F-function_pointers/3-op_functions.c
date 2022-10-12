#include "3-calc.h"

/**
 * op_add - addition operator
 * @a: first integer
 * @b: second integer
 * Return: sum of 2 numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substractin operator
 * @a: first integer
 * @b: second integer
 * Return: difference of 2 numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of 2 numbers
 * @a: integer
 * @b: integer
 * Return: remainder of division of the numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2 number
 * @a: integer
 * @b: integer
 * Return: result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get remainder of the division of 2 number
 * @a: integer
 * @b: integer
 * Return: remainder of division of the number
 */

int op_mod(int a, int b)
{
	return (a % b);
}

