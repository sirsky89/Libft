#include <stddef.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, char *src, size_t size)
{
  if (size == 0)
    return (0);

  size_t copied = 0;

  while (copied < size - 1 && src[copied] != '\0')
  {
    dst[copied] = src[copied];
    copied++;
  }
  dst[copied] = '\0';

  while (src[copied] != '\0')
    copied++;

  return copied;
}

int main()
{
  char source[] = "Hello, World!"; // Source string
  char destination[10];            // Destination buffer with enough space

  size_t result = ft_strlcpy(destination, source, sizeof(destination));

  printf("Copied string: %s\n", destination);
  printf("Length of copied string: %zu\n", result);

  return 0;
}