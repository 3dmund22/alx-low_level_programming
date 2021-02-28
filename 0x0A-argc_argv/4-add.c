#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
#include <stdbool.h> /* bool data type */

/**
 * is_num - iterate through each argv to test if it's a number
 * @argvv: a argv
 * Return: true only if entire string is a number, false if not
 */
bool is_num(char *argv)
{
  int j = 0;

  for (j = 0; argv[j]; j++)
    {
      if (!(argv[j] >= '0' && argv[j] <= '9'))
	return (0);
    }
  return (1);
}
int main(int argc, char *argv[])
{
  int i = 1;
  int sum = 0;
  if (argc == 1)
    {
      printf("0\n");
      return (0);
    }

  while (i < argc)
    {
      if (is_num(argv[i]))
	sum += atoi(argv[i]);
      else
	{
	  printf("Error\n");
	  return (1);
	}
      i++;
    }
  printf("%d\n", sum);

  return (0);
}
