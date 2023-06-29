#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of characters to be copied from src
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

