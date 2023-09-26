#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: str to be searched
 * @accept: bytes to search
 * Return: pointer to the byte s matching one of the bytes in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}

		s++;
	}

	return (NULL);
}
