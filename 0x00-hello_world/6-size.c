#include<stdio.h>
int main(void)
{
  int intType;
  long int longType;
  long long int longlongType
  float floatType;
  char charType;

  printf("Size of int: %zu bytes\n", sizeof(intType));
  printf("Size of long: %zu byte\n", sizeof(longType));
  printf("Size of float: %zu bytes\n", sizeof(floatType));
  printf("Size of longlong: %zu bytes\n", sizeof(longlongType));
  printf("Size of char: %zu byte\n", sizeof(charType));

  return 0;
}
