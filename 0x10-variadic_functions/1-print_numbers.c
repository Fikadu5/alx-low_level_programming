#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * print_numbers - prints numbers followed by a new line.
  * @separator: string to be printed between numbers.
  * @n: number of integers passed to the function.
  *
  * Return: void.
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list numbers;

	va_start(numbers, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(numbers, int));
		if (j < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
