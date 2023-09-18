#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: str to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int strcount = 0;

	for (i = 0; s[i] != '\0'; i++)
		strcount++;
	for (i = strcount - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

