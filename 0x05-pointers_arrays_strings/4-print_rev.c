#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\n')
	{
		longi++;
		o++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
