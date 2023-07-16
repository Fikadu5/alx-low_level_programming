#include <stdio.h>
/**
 * Main - Prints the lower case alphabet in reverse.
 * followed by a new line
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
