#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocate memory and set all values to 0
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
  void *ptr;
  unsigned int i = 0;

  if (nmemb == 0 || size == 0)
    return (NULL);

  ptr = malloc(nmemb * size);
  
  if (ptr == NULL)
    return (NULL);

  while (i < 0 (nmemb * size))
    {
      *((char *)ptr + i) = 0;
      i++;
    }

  return (ptr);
}
