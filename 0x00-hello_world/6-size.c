#include<stdio.h>
int main(void)
{
  char charType;
  int intType;
  long int longType;
  long long int longlongType
  float floatType;
  
  printf("Size of char: %zu byte(s)\n", sizeof(charType));
  printf("Size of int: %zu bytes(s)\n", sizeof(intType));
  printf("Size of long: %zu byte(s)\n", sizeof(longType));
  printf("Size of float: %zu bytes(s)\n", sizeof(floatType));
  printf("Size of longlong: %zu bytes(s)\n", sizeof(longlongType));
  
  return 0;
}
