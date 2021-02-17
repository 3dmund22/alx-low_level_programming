#include "holberton.h"

/**
 *puts2 -prints every other character, starting with the first
 *
 */
void puts2(char *str)
{
  int i;
  int c = 0;

  while (str[c] != '\0')
    c++;

  for (i = 0; i < c; i++)
    {
      if (i % 2 != 0)
	continue;
      _putchar(str[i]);
    }
  _putchar('\n');
}
