#include "3-calc.h"

/**
  * get_op_func - function selects the correct function to perform.
  * @s: operator used.
  *
  * Return: correct function result or NULL if operator is wrong.
  */

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
	int j;

	j = 0;
	while (j < 5)
	{
		if (s[0] == ops[j].op[0])
		{
			return (ops[j].f);
		}
		j++;
	}
	return (NULL);
}
