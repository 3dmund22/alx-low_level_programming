#include "holberton.h"

/**
 *print_rev - prints a string in reverse
 *
 */
void print_rev(char *s);
{
  int i, c = 0;

  while(s[c] != '\0')
    c++;

  for (i = c - 1; i >= 0; i--)
    _putchar(s[i]);

  _putchar('\n');
}
