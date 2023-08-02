#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number to evaluate
 * Return: the value 1 if prime number
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates the number if prime
 * @n: number to evaluate
 * @i: number to iterate
 * Return: the value of 1 if prime
 *
 */
int actual_prime(int n, int i)
{
	if (i == 0)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
