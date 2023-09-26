#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @c: char to find
 * @s: str to eb searched
 * Return: pointer to the first occurrence of the c char in the str s, or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
