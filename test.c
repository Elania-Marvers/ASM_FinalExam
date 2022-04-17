#include <stdio.h>
 
extern int strlen(const char *str);
extern char *strlcpy(char *str, const char *stb, size_t size);
 
int main(int argc, const char **argv){
  const char *str = "12345";

  char buffer[50];
   
  printf("\033[1m === BEGIN === \033[0m\n");
   
  printf("Adresse  de \"%s\": %p\n", str, &str);
  printf("Longueur de \"%s\": %d\n", str, strlen(str));

  strlcpy(buffer, "my string\0", 10);

  printf("%s\n", buffer);
  
  printf("\033[1m ===  END  === \033[0m\n");
  return 0;
}
