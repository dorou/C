#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
  char a[50];
  char b[50];
   scanf("%s\n %s", &a, &b);
  char * ac = a;
  char * bc = b;
  strcat(ac, bc);
  puts(ac);
  return 0;
}