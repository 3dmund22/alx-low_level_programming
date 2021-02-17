#include "holberton.h"

/**
 *void swap_int - swaps values of two integers.
 *
 */
void swap_int(int *a, int *b)
{
  int a;
  int b;

  a = *a;
  b = *b;

  *a = b;
  *b = a;
}
