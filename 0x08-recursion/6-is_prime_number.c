#include "main.h"

/**
* is_prime - Recursively check if b is prime number
* @a: incrementing value
* @b: number to be checked
*
* Return: 1 if prime number, 0 if otherwise
*/

int is_prime(int a, int b)
{
	if (b % a == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	else
		return (is_prime(a + 1, b));
}

/**
* is_prime_number - Recursively check if b is prime number
* @n: number to be checked
*
* Return: 1 if prime number, 0 if otherwise
*/

int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
		return (0);
	else
		return (is_prime(2, n));
}
