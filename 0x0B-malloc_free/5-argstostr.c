#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * Return: length
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */
int _strlen(char *s)
{
  int len = 0;

  while (*s != '\0')
    len++, s++;

  return (len);
}
char *argstostr(int ac, char **av)
{
  char *s;
  int len = 0, i, j, k = 0;

  if (ac == 0 || av == NULL)
    return (NULL);

  for (i = 0; i < ac; i++)
    {
      len += _strlen(av[i]);
    }
  len += (ac + 1);


  str = malloc(len * sizeof(char));

  if (str == NULL)
    {
      return (NULL);
    }

  for (i = 0; i < ac; i++)
    {
      for (j = 0; j < _strlen(av[i]); j++)
	{
	  str[k++] = av[i][j];
	}
      str[k++] = '\n';
    }

  return (str);
}
