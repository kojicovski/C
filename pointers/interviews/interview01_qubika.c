#include <assert.h>

#include <stdio.h>
#include <string.h>

// Rules:
//  - Can't use generative tools
//  - Can't use help forums (stackoverflow.com and such)
//  - Can use technical references (cplusplus.com, cppreference.com, man7.org, etc)
//  - Unaligned accesses are not permitted
//  - Can assume a little endian architecture
//  - Can use the C standard lib (except for memcpy and strnlen)

void *my_memcpy(void *restrict dest, const void *restrict src, size_t count)
{
    // Implement memcpy here
    /*void *: It is a generic pointer type in C. It can point to any data type (such as int, char, float, etc.). 
      However, since it is a generic pointer, you cannot perform pointer arithmetic or directly access the data it points to without first casting it to a specific type.
   */
  char *d = (char *)dest; 
  const char *s = (const char *)src; 
  
  for (size_t i = 0; i < count; i++) 
  { d[i] = s[i]; } 
  
  return dest;
}

size_t my_strnlen(const char *s, size_t max)
{
    // Implement strnlen here
    // len is a size_t because the function returns a size_t type
    // size_t is generally used in sizes and counts and is an unsigned value 
   size_t len = 0; 
   
   while (len < max && s[len] != '\0') {   
    len++;
   }
   
    return len;
}

// the code in main() cannot be modified, and all assertions must pass
int main()
{
    char buffer[32] = {};
    const char *str = "Hello, world! This is a test";

    int str_len = my_strnlen(str, 23);
    char *buf = my_memcpy(buffer, str, str_len);

    printf("%s\n", buf);





    assert(23 == my_strnlen(buf, 24));
    assert(23 == str_len);
    assert(memcmp(str, buffer, str_len) == 0);
    assert(buf == &buffer[0]);

    return 0;
}


