#include "main.h"

/**
 * _strcmp - str comparison
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: int;
 */

int _strcmp(char *s1, char *s2)
{
	int p;

	for (p = 0; s1[p] != '\0' || s2[p] != '\0'; p++)
	{
		if (s1[p] != s2[p])
		{
			if (s1[p] < s2[p])
				return (s1[p] - s2[p]);
			else if (s2[p] < s1[p])
				return (s1[p] - s2[p]);
		}
	}
	return (0);
}
