#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: ptr to the square matrix
 * @size: size of the sqaure matrix
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int p, q;

	for (p = 0, q = 0; p < size; p++, q++)
	{
		sum1 += a[p * size + q];
	}

	for (p = 0, q = size - 1; p < size; p++, q--)
	{
		sum2 += a[p * size + q];
	}

	printf("%d, %d\n", sum1, sum2);
}
