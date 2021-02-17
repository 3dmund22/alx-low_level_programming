#include "holberton.h"

/**
 *strlen - length of string
 *
 */
int _strlen(char *s)
{
  int counter = 0;

  while (*s != '\0')
    {
      counter++;
      *s++;
    }

  return (counter);
}
