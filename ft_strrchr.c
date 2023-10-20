#include <stddef.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
  const char *last = 0;
  while (*s != '\0')
  {
    if (*s == (char)c)
    {
      last = s;
    }
    s++;
  }
  if ((char)c == '\0')
  {
    return (char *)s;
  }
  return (char *)last;
}

int main()
{
  const char str[] = "Hello, World!";
  char searchChar = 'o';

  char *result = ft_strrchr(str, searchChar);

  if (result != NULL)
  {
    printf("Last occurrence of character '%c' found at position %ld\n", searchChar, result - str);
  }
  else
  {
    printf("Character '%c' not found in the string\n", searchChar);
  }

  return 0;
}