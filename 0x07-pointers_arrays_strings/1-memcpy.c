#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: ptr to the dest mem area
 * @src: ptr to the srce of mem area
 * @n: bytes to copy
 * Return: ptr to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
		dest[p] = src[p];

	return (dest);
}
