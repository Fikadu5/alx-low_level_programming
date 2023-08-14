#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @o: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int o)
{
	int k;

	k = 0;
	while (k < o && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < o)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
