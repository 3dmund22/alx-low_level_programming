#include "holberton.h"

/**
 * more_numbers - print 0 to 14, 10 times
 */
void more_numbers(void)
{
  char n;
  int counter;

  for (i = 1; i <= 10; i++)
    {
      for (n = 0; n <= 14; i++)
	{
	  if (n / 10 > 0)
	  _putchar((n / 10) + '0');
	  _putchar((n % 10) + '0');
	}
      _putchar('\n');
    }
}
