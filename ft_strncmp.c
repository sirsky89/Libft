#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  int i = 0;
  if (n == 0)
    return (0);
  while (s1[i] == s2[i] && s1[i] != '\0')
  {
    if (i < (n - 1))
      i++;
    else
      return (0);
  }
  return (s1[i] - s2[i]);
}

int main()
{
  const char *str1 = "Hello, World!";
  const char *str2 = "Hello, OpenAI!";
  size_t n = 8;

  int result = ft_strncmp(str1, str2, n);

  if (result == 0)
  {
    printf("The first %zu characters of both strings are equal.\n", n);
  }
  else if (result < 0)
  {
    printf("str1 is less than str2.\n");
  }
  else
  {
    printf("str1 is greater than str2.\n");
  }

  return 0;
}