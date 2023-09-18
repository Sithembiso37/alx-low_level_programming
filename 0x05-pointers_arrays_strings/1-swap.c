#include "main.h"

/**
 * swap_int - swaps two numbers
 * @a: value 1 to be swapped
 * @b: value 2 to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int acopy = *a;
	*a = *b;
	*b = acopy;
}
