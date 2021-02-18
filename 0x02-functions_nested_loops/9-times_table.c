#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
  int A;
  int B;
  int result;
  for (A = 0; A <= 9; A++)
    {
      for (B = 0; B <= 9; B++)
	{
	  result = (A * B);

	  if (column == 0)
	    {
	      _putchar('0' + result);
	    }
	  else if (result <= 0)
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar(' ');
	      _putchar('0' + result);
	    }
	  else
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar('0' + (product / 10));
	      _putchar('0' + (product % 10));
	    }
	}
      _putchar('\n');
    }
}
