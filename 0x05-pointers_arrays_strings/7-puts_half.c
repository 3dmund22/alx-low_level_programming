#include "holberton.h"

/**
 *puts_half - prints half of a string.
 *
 */
void puts_half(char *str)
{
  int i;
  int half;
  int c = 0;

  while (str[c] != '\0')
    {
      c++;
    }

  if (c % 2 == 0)
    {
      for (i = c / 2; i < c; i++)
	{
	  _putchar(str[i]);
	}
    }
  else
    {
      half = (c - 1) / 2;
      for (i = half + 1; i < c; i++)
	{
	  _putchar(str[i]);
	}
    }
  _putchar('\n');
}
