#include <stddef.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
  while (*s != '\0')
  {
    if (*s == (char)c)
    {
      return (char *)s;
    }
    s++;
  }
  if (c == '\0')
  {
    return (char *)s;
  }
}

int main()
{
  char str[] = "Hello, World!";
  char searchChar = 'H';

  char *result = ft_strchr(str, searchChar);

  if (result != NULL)
  {
    printf("Character '%c' found at position %ld\n", searchChar, result - str);
  }
  else
  {
    printf("Character '%c' not found in the string\n", searchChar);
  }

  return 0;
}