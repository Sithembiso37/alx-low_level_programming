#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a str
 * @str: str to ne printed
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
