#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: length of a str
 * Return: op 0 for success
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
