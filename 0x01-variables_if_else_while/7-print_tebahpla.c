#include <stdio.h>

/*
 *Prints lowercase alphabets in reverse
 */

int main(void)
{
  char alphabet = 'z';

  while (alphabet >= 'a')
    {
      putchar(alphabet);
      alphabet--;
    }
  putchar('\n');

  return (0);

}
