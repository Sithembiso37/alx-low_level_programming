#include "main.h"

/**
 * _isupper - uppercase chars are checked
 * @c: parameter to be checked
 * Return: op 1 for success else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
