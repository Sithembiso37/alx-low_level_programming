#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: str to search
 * @accept: str that contains chars to search
 * Return: bytes in s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int matchcnt = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				matchcnt++;
				break;
			}
			a++;
		}

		if (*a == '\0')
		{
			return (matchcnt);
		}

		s++;
	}

	return (matchcnt);
}
