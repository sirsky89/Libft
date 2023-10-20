#include <stdio.h>

void *ft_memset(void *ptr, int value, size_t num)
{
  unsigned char *p = ptr;
  unsigned char v = (unsigned char)value;

  while (num > 0)
  {
    *p = v;
    p++;
    num--;
  }

  return ptr;
}

int main()
{
  char buffer[20] = "Hello World";

  ft_memset(buffer, 'A', 5); // Fill the first 5 bytes with 'A'

  printf("Buffer after memset: %s\n", buffer);

  return 0;
}