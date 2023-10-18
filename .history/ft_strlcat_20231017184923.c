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

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  size_t c;
  size_t d;

  if (dstsize <= ft_strlen(dst))
    return (dstsize + ft_strlen(src));
  c = ft_strlen(dst);
  d = 0;
  while (src[d] != '\0' && c + 1 < dstsize)
  {
    dst[c] = src[d];
    c++;
    d++;
  }
  dst[c] = '\0';
  return (ft_strlen(dst) + ft_strlen(&src[d]));
}

int main()
{
  char destination[20] = "Hello, ";
  const char *source = "World!";
  size_t result = ft_strlcat(destination, source, sizeof(destination));

  printf("Concatenated string: %s\n", destination);
  printf("Total length of concatenated string: %zu\n", result);

  return 0;
}
