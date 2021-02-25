#include "holberton.h"

/**
 * match - ascertain whether string is palindrome
 * @head: index starting from left of string
 * @tail: index starting from right of string
 */
int match(char *head, char *tail)
{

  if (head >= tail)
    return (1);
  if (*head == *tail)
    return (match(head + 1, tail - 1));

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
