#include "main.h"
#include <stddef.h>

/**
 * _strstr -  locates a substring
 * @haystack: str to be searched
 * @needle: substr to find
 * Return: pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
