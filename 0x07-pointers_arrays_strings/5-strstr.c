#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to search within.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the first occurrence of the substring @needle within
 *         the string @haystack, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

