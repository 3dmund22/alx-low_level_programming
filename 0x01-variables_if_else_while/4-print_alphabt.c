#include <stdio.h>

/*
 * Prints lowercase alphabets with the exception of 'q' and 'e'
 */
int main(void)
{
  char alphabet= 'a';

  while (alphabet <= 'z')
    {
      if ((alphabet != 'q') && (alphabet != 'e'))
	{
	  putchar(alphabet);
	}
      alphabet++;
    }
  putchar('\n');


  return (0);

}
