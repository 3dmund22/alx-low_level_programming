#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer
 * Return: doesn't return anything
 */
void jack_bauer(void)
{
  int hour = 0;
  int m = 0;

  while (hour < 24)
    {
      while (m < 60)
	{
	  _putchar('0' + (hour / 10));
	  _putchar('0' + (hour % 10));
	  _putchar(':');
	  _putchar('0' + (m / 10));
	  _putchar('0' + (m % 10));
	  _putchar('\n');
	  m++;
	}
      m = 0;
      hour++;
    }
} 
