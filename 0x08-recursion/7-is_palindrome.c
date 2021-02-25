#include "holberton.h"

/**
 * match - ascertain whether string is palindrome
 * @i: index starting from left
 * @j: index starting from the right
 */
int match(char i, char j)
{

  if (i >= j)
    return (1);
  if (str[i] == str[j])
    return (match(str,i + 1, j - 1));

  return (0);
}

/**
 * strlen - length of string
 * @s: string
 */
int strlen(char *s)
{

  if (*s == '\0')
    return (0);
  s++;
  return (1 + (strlen(s)));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
  int len = strlen(s);

  return (match(s, (s + len - 1)));
}
