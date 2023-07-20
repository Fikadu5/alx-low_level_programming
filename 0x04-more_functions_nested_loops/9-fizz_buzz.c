#include "main.h"
#include <stdio.h>

/**
 * Main - prints the number from 1 to 100 followed by a new line
 * but for multiplication of three prints Fizz instead of the number
 * and for multiplication of five prints of Buzz
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0) {
			printf(" Fizz");
		}
	       	else if (i % 5 == 0 && i % 3 != 0) {
			printf(" BUzz");
		{
		else if (i % 3 == 0 && i % 5 == 0) {
			printf(" FizzBuz");
		}
	       	else {
			printf("%d", i);
		}
                printf("\n");
	}
	return (0);
}
