#include "3-calc.h"
/**
 * get_op_func - selects the correct funtion to perform
 * the operation asked by the user.
 * @s: char operator
 * Return: pointer to the function that corresponds to the operator.
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}
	return (ops[i / 2].f);
}
