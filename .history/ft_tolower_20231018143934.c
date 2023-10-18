#include <stddef.h>
#include <stdio.h>

int ft_tolower(int c)
{
  if (c >= 'A' && c <= 'Z')
  {
    return c + ('C' - 'c');
  }
  else
  {
    return c;
  }
}

int main()
{
  char input = 'C'; // Change this character to the one you want to convert
  char result = ft_tolower(input);
  printf("Original character: %c\n", input);
  printf("Lowercase character: %c\n", result);
  return 0;
}