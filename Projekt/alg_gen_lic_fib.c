// Daniel Trojko, Student
// Algorytm generacji liczb Fibonacciego metodą iteracyjną
// Data: 20.11.2022
//-----------------------------

#include <stdio.h>
#include <stdlib.h>


unsigned long long Fib_metoda_iteracyjna(int n);


int main()
{
  int n;

  scanf("%d",n);
  printf("%ull \n",Fib_metoda_iteracyjna(n));

  return 0;
}

unsigned long long Fib_metoda_iteracyjna(n){
    unsigned long long f, f0, f1;

    f0 = 0;
    f1 = 1;

    for(int i = 0; i <= n; i++ ){
    if( i > 1 ){
      f  = f0 + f1;
      f0 = f1;
      f1 = f;
    }else{ 
      f = i;
    }
  }
  return f;
}
