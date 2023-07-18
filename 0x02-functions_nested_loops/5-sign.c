#include "main.h"

/**
 * print_sign - Prints the sign of the number.
 * @n: the int to check.
 * Return: 1 and prints + if n is greaterthan 0.
 * 0 and prints 0 if n  is zero.
 * -1 and prints - if n is lessthan 0.
 */
int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return (1);
	}else if(n == 0)
	{
		_putchar('0');
		return (0);
	}else
	{
		_putchar('-');
		return (-1);
	}
} 
