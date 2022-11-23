// Daniel Trojko. Student
// ciong fibonaciego rekurencyjnie
// 2022-11-22

#include <stdio.h>

#include <stdlib.h>

int fib(int n);

int main() {
  int n;

  printf("Podaj n: ");
  scanf("%d", & n);


  for (int i = 1; i <= n; i++) {

    printf("%d\n", fib(i));

  }

}

int fib(int n) { 
  if(n==1)
    return 1;
  else if(n==2)
    return 2;
  else if (n > 2)
    return fib(n - 2) + fib(n - 1);
}