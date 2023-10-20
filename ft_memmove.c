#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
  char *d = (char *)dest;
  char *s = (char *)src;
  size_t i = 0;

  if (d > s)
    while (n-- > 0)
      d[n] = s[n];
  else
    while (i < n)
    {
      d[i] = s[i];
      i++;
    }
  return (dest);
}

void *ft_memmove(void *dest, const void *src, size_t n);

int main()
{
  char source[] = "Hello, World!";
  char destination[20];

  // Using ft_memmove to copy data from source to destination
  ft_memmove(destination, source, strlen(source) + 1); // +1 to include the null terminator

  printf("Source: %s\n", source);
  printf("Destination: %s\n", destination);

  return 0;
}