#include "holberton.h"

/**
 * print_alphabet - prints lowercase alphabet
 * return : 0
 */

void print_alphabet(void);
{
  char alphabet;
  alphabet = 'a';

  while(alphabet <= 'z')
    {
      _putchar(alphabet);
      alphabet++;
    }
  _putchar('\n');
}
