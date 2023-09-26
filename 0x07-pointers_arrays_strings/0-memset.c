#include "main.h"
#include <stddef.h>

/**
 * _memset - fills memory with a constant byte
 * @s: starting adress of mem to be filled
 * @n: bytes to be changed
 * @b: value to be changed
 * Return: s altered array
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* a pointer that stors address of *s*/
	char *p = s;

	while (n > 0)
	{
	*p = b;
	p++;
	n--;
	}

	return (s);
}
