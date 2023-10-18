#include <stddef.h>
#include <stdio.h>

int ft_tolower(int c)
{
  if (c >= 'A' && c <= 'Z')
  {
    return c + ('a' - 'A');
  }
  else
  {
    return c;
  }
}

int main()
{
  char input = 'Z'; // Change this character to the one you want to convert
  char result = ft_tolower(input);
  printf("Original character: %c\n", input);
  printf("Lowercase character: %c\n", result);
  return 0;
}