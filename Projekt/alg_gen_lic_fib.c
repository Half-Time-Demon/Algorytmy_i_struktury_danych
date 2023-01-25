// Daniel Trojko, Student
// Algorytm generacji liczb Fibonacciego metodą iteracyjną
// Data: 20.11.2022
//-----------------------------

#include <stdio.h>
#include <stdlib.h>

int main( )
{
  unsigned long long f, f0, f1;
  int i, n;

  f0 = 0;
  f1 = 1;
  scanf("%d",n);
  for( i = 0; i <= n; i++ )
    if( i > 1 )
    {
      f  = f0 + f1;
      f0 = f1;
      f1 = f;
    }
    else f = i;
  printf("%d \n",f);
  return 0;
}