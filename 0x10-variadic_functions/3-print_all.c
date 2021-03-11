#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 */
void print_char(var_list var)
{
  printf("%c", var_arg(var, int));
}

/**
 * print_int - prints int
 */
void print_int(var_list varlist)
{
  printf("%d", var_arg(varlist, int));
}

/**
 * print_float - prints float
 */
void print_float(var_list varlist)
{
  printf("%f", var_arg(varlist, double));
}

/**
 * print_string - prints string
 */
void print_string(var_list varlist)
{
  char *s;

  s = var_arg(varlist, char *);

  if (s == NULL)
    {
      printf("(nil)");
      return;
    }
  printf("%s", s);
}

/**
 * print_all - print ints, chars, floats, and strings
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
  char *separator = "";
  int i, j = 0;
  va_list valist;

  datatype choice[] = { {'c', print_char},
			{'i', print_int},
			{'f', print_float},
			{'s', print_string},
			{'\0', NULL} };

  var_start(varlist, format);
  while (format != NULL && format[j] != '\0')
    {
      i = 0;
      while (choice[i].letter != '\0')
	{
	  if (choice[i].letter == format[j])
	    {
	      printf("%s", separator);
	      choice[i].func(varlist);
	      separator = ", ";
	    }
	  i++;
	}
      j++;
    }
  var_end(varlist);
  printf("\n");
}
