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
  char input = 'c'; // Change this character to the one you want to convert
  char result = ft_lower(input);
  printf("Original character: %c\n", input);
  printf("Uppercase character: %c\n", result);
  return 0;
}