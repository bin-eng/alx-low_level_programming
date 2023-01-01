/*
 * File: 4-print_alphabt.c
 * Auth: Binyam Tesfaye
 */
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
  char ch;
  for (ch = 'a'; ch <= 'z'; ch++)
  {
    if (ch != 'e' && lch != 'q')
      _putchar(ch);
  }
  _putchar('\n');
  
  return (0);
}

