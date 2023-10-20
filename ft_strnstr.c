#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
  if (*little == '\0')
  {
    return (char *)big;
  }

  while (*little != '\0' && len > 0)
  {
    if (*big == *little)
    {
      size_t i = 0;
      while (little[i] != '\0' && big[i] == little[i] && len > 0)
      {
        i++;
        len--;
      }
      if (little[i] == '\0')
      {
        return (char *)big;
      }
      len += i; //
    }
    big++;
    len--;
  }

  return NULL;
}

int main()
{
  const char *big = "Hello, World!";
  const char *little = "llo";
  size_t len = 13;

  char *result = ft_strnstr(big, little, len);

  if (result != NULL)
  {
    printf("Substring found at position %ld: %s\n", result - big, result);
  }
  else
  {
    printf("Substring not found in the string.\n");
  }

  return 0;
}
