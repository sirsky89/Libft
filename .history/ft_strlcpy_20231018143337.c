#include <stddef.h>
#include <stdio.h>

int ft_toupper(int c)
{
  if (c >= 'a' && c <= 'z')
  {
    return c - ('a' - 'A');
  }
  else
  {
    return c;
  }
}

int main()
{
  char input = 'h'; // Change this character to the one you want to convert
  char result = ft_toupper(input);
  printf("Original character: %c\n", input);
  printf("Uppercase character: %c\n", result);
  return 0;
}