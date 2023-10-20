#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
  const char *p = s;
  char uc = (char)c;

  while (n--)
  {
    if (*p == uc)
    {
      return (void *)p;
    }
    p++;
  }
  return NULL;
}

int main()
{
  const char *str = "This is a test string.";
  char search = 'i';

  void *result = ft_memchr(str, search, strlen(str));

  if (result)
  {
    printf("Found '%c' at position: %d\n", search, (char *)result - str);
  }
  else
  {
    printf("'%c' not found in the string.\n", search);
  }

  return 0;
}