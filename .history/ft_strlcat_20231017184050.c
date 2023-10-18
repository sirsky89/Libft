#include <string.h>

int main()
{
  char dest[20] = "Hello, ";
  const char *src = "World!";
  size_t result = strlcat(dest, src, sizeof(dest));

  printf("Concatenated string: %s\n", dest);
  printf("Total length of concatenated string: %zu\n", result);

  return 0;
}
