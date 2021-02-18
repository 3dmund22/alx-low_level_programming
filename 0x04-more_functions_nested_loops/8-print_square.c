#include "holberton.h"

/**
 * print_square - print a square followed by new line
 */
void print_square(int size)
{
  int l, l2;

  if (size > 0)
    {
      for (l = 1; l <= l2; l++)
	{
	  for (l2 = 1; l2 <= size; l2++)
	    {
	      _putchar('#');
	    }
	  _putchar('\n');
	}
    }
  else
    _putchar('\n');
}
