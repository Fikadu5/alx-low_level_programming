#include <stdarg.h>

/**
  * sum_them_all - returns the sum of all its parameters.
  * @a: number of arguments to be summed.
  *
  * Return: sum or 0.
  */

int sum_them_all(const unsigned int a, ...)
{
	unsigned int sum = 0, i;
	va_list arglist;

	if (a == 0)
		return (0);

	va_start(arglist, a);

	for (i = 0; i < a; i++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}
