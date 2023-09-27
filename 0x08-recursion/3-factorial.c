#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: given number
 * Return: op 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
