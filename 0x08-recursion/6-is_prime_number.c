#include "holberton.h"
/**
 * Return: 1 if prime, 0 if not
 */
int prime(int n, int j)
{
  if (n == j)
    return (1);
  if (n % j == 0)
    return (0);
  return (prime(n, j + 1));

}

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
  int j = 3;

  if (n % 2 == 0 || n < 2)
    return (0);
  if (n == 2)
    return (1);

  return (prime(n, j));
}
