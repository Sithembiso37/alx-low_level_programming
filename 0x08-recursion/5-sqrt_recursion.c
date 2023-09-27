#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: given number
 * Return: n, if n does not have a natural square root, return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Helper function to find the square root
 * @n: given num for square root
 * @g: The current guess for the square root.
 * Return: n, if n does not have a natural square root, return -1
 */

int find_sqrt(int n, int g)
{
	if (g * g == n)
		return (g);
	else if (g * g > n)
		return (-1);
	else
		return (find_sqrt(n, g + 1));
}
