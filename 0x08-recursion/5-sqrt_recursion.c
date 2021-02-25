#include "holberton.h"

/**
 * rt - find square root of n
 * @n: n
 * @root: check root
 */
int rt(int n, int root)
{
  if (root * root > n)
    return (-1);

  if (root * root == n)
    return (root);

  return (rt(n, root + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 * return: natural square root, -1 if not natural root
 */
int _sqrt_recursion(int n)
{
  if (n < 0)
    return (-1);

  return (rt(n, 0));
}
