#include "holberton.h"

/**
 * print_diagonal - print character "\" n times
 */

void print_diagonal(int n)
{
  int x;
  int y;

  if (n > 0)
    {
      for (x = 1; x <= n; x++)
	{
	  for (y = 1; y < x; y++)
	    _putchar(' ');
	  _putchar('\\');
	  _putchar('\n');
	}
    }
  else if (n <= 0)
    _putchar('\n');
}
