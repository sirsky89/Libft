#include <stdio.h>
#include <string.h>

int *ft_memcmp(const void *s1, const void *s2, size_t n)
{
  const char *p1 = s1;
  const char *p2 = s2;

  while (n--)
  {
    if (*p1 < *p2)
    {
      return (int *)-1;
    }
    else if (*p1 > *p2)
    {
      return (int *)1;
    }
    p1++;
    p2++;
  }
  return (0);
}

int main()
{
  char str1[] = "apple";
  char str2[] = "apples";

  int result = ft_memcmp(str1, str2, 6); // Compare the first 5 bytes

  if (result < 0)
  {
    printf("str1 is less than str2.\n");
  }
  else if (result > 0)
  {
    printf("str1 is greater than str2.\n");
  }
  else
  {
    printf("str1 matches str2.\n");
  }

  return 0;
}