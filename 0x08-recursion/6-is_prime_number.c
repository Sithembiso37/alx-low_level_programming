#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: input number to be checked
 * Return: 1 if the input integer is a prime number, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if ip is prime recursively
 * @n: number to evaluate
 * @p: iterator
 * Return:  1 if prime, else 0
 */

int actual_prime(int n, int p)
{
	if (p == 1)
	return (1);
	if (n % p == 0 && p > 0)
		return (0);
	return (actual_prime(n, p - 1));
}
