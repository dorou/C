#include <stdio.h>

int main(void)
{
   int i = 365, j = 7; 
   int a= 12258, b= 23;
   int c= 996, d= 4;
   int N_m1,N_m2,N_m3;
 N_m1= i+j-i%j;
 N_m2= a+b-a%b; 
 N_m3= c+d-c%d; 
printf("%i\n %i\n %i\n", N_m1,N_m2,N_m3); 
  return 0;
}