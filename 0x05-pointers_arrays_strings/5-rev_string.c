#include "holberton.h"

/**
 *rev_string- reverses a string
 *
 */
void rev_string(char *s)
{
  int len;
  int c;
  char *a, *b, d;

  len = string_length(s);
  a = s;
  b = s;

  for (c = 0; c < len - 1; c++)
    b++;

  for (c = 0; c < len/2; c++)
    {
      d = *b;
      *b = *a;
      *a = d;

      a++;
      b--;
    }
}
