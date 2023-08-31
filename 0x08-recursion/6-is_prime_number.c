#include "main.h"

/**
 * isPrime - function check whether a number
 *
 * @n: number to check
 * @i: integer
 *
 * Return: int
 */
int isPrime(int n, int i)
{

	if (n == 1 || n == 0)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (isPrime(n, i + 1));
}

/**
 * is_prime_number - check if number is prime
 *
 * @n: number to check
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (isPrime(n, 2) == 1)
		return (1);
	else
		return (0);
}
