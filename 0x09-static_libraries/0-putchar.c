#include <unistd.h>

/**
 * _putchar - writes the character 0 to school.
 * @c: The character to print.
 *
 * Result: 1 on success.
 * -1 on error and errno is set appropriately.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
