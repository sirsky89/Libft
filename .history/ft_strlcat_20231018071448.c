#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
  size_t l;

  l = 0;
  while (s[l] != 0)
    l++;
  return (l);
}

// size_t ft_strlcat(char *dst, const char *src, size_t size)
// {
//   size_t c;
//   size_t d;

//   if (size <= ft_strlen(dst))
//     return (size + ft_strlen(src));
//   c = ft_strlen(dst);
//   d = 0;
//   while (src[d] != '\0' && c + 1 < size)
//   {
//     dst[c] = src[d];
//     c++;
//     d++;
//   }
//   dst[c] = '\0';
//   return (ft_strlen(dst) + ft_strlen(&src[d]));
// }

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
  size_t d = 0; // Index for source string
  size_t c = 0; // Index for destination string

  // Find the end of the destination string
  while (c < size && dst[c] != '\0')
  {
    c++;
  }

  // Calculate how many characters can be appended
  size_t append_chars = size - c - 1;

  // Copy characters from src to dst
  while (src[d] != '\0' && d < append_chars)
  {
    dst[c] = src[d];
    c++;
    d++;
  }

  // Null-terminate the destination string
  if (c < size)
  {
    dst[c] = '\0';
  }

  // Calculate the length of the concatenated string
  while (src[d] != '\0')
  {
    d++;
  }

  return c + d;
}

int main()
{
  char destination[20] = "Plus, ";
  const char *source = "Ultra!";
  size_t result = ft_strlcat(destination, source, sizeof(destination));

  printf("Concatenated string: %s\n", destination);
  printf("Total length of concatenated string: %zu\n", result);

  return 0;
}
