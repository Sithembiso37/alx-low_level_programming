#include "main.h"

/**
 * rev_string - reverses a str
 * @s: str to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char j;
	int strcount = 0;

	for (i = 0; s[i] != '\0'; i++)
		strcount++;
	for (i = 0; i < strcount / 2; i++)
	{
		j = s[i];
		s[i] = s[strcount - 1 - i];
		s[strcount - 1 - i] = j;
	}
}
