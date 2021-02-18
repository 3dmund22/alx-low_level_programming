#include "holberton.h"

/**
 * print_triangle - print traingle followed by new line
 */

void print_triangle(int size)
{
  int a;
  int b;
  int tri;

  if (size <= 0)
    {
      _putchar('\n');
    }

  for (a = 1; a <= size; a++)
    {
      for (b = 1; b <= (size - a); b++)
	_putchar(' ');

      for (tri = 1; tri <= a; tri++)
	_putchar('#');

      _putchar('\n');
    }
}
