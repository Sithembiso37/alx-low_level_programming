#include "main.h"

/**
 * _strncat - concats two str
 * @dest: destination str
 * @src: source str
 * @n: bytes to concat
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int p;

	for (p = 0; p < n && *src != '\0'; p++)
	{
		dest[len + p] = *src;
		src++;
	}
	dest[len + p] = '\0';
	return (dest);
}
