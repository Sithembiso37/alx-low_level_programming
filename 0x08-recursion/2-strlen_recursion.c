#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a str
 * @s: str to be calc
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
