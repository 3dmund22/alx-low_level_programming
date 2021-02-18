#include <stdio.h>

/*
 *Prints lowercase alphabet then uppercase alphabet
 */

int main(void)
{
  char lowercase = 'a';
  char UPPERCASE = 'A';

  while(lowercase <= 'z')
    {
      putchar(lowercase);
      lowercase ++;
    }

  while(UPPERCASE <= 'Z')
    {
      putchar(UPPERCASE);
      UPPERCASE++;
    }

  putchar('\n');

  return (0);
  
}
