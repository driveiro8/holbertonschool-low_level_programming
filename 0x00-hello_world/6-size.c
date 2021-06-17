#include<stdio.h>
int main(void)
{
  char charType;
  int intType;
  long int longType;
  long long int longlongType
  float floatType;
  
  printf("Size of char: %zu byte\n", sizeof(charType));
  printf("Size of int: %zu bytes\n", sizeof(intType));
  printf("Size of long: %zu byte\n", sizeof(longType));
  printf("Size of float: %zu bytes\n", sizeof(floatType));
  printf("Size of longlong: %zu bytes\n", sizeof(longlongType));
  
  return 0;
}
