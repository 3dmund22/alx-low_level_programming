#include "holberton.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{

  int temp;
  int start = 0;
  int end = n - 1;

  while (a < b)
    {
      temp = *(a + start);
      *(a + start) = *(a + end);
      *(a + end) = temp;
      start++, end--;
    }
}
