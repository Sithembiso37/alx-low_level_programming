#include "main.h"

/**
 * _strncpy - copies str
 * @dest: destination str
 * @src: source str
 * @n: bytes to cpy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p;

	for (p = 0; p < n && src[p] != '\0'; p++)
		dest[p] = src[p];
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}
	return (dest);
}
