#include <stdio.h>

/*
 *Prints all single digits of base 10 from 0 with putchar
 */

int main(void)
{
  int num = '0';

  while (num <= '9')
    {
      putchar(num);
      num++;
    }

  putchar('\n');

  return (0);

}
