/*
Daniel Trojko, Student
* -----------------
 Laboratorium 1. Zadanie przyklad
 Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy
X(n)
* -----------------
2022-10-11
*/
// gcc zad_3.c -o Zad_3 -lm

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int validate(float);
float X[];

int main() {
  int n = 0, i = 0;
  float a = 0, x = 0, y;
  do {
    printf("wprowadz liczba a=");
    scanf(" %f", &a);
    printf("rozmiar tablicy n=");
    scanf(" %d", &n);
    float X[n];
    for (int i = 0; i < n; i++) {
      printf("wprowadz liczba X(%d)=", i + 1);
      scanf("%f", &x);
      X[i] = x;
    }
  } while (1 != validate(a));

  while (i <= n) {
    printf("iteracja %d: x=%.1f a=%.1f ", i + 1, X[i], a);
    y = a * pow(X[i], 2);
    printf("y=%.1f\n", y);
    i++;
  }
  return 0;
}

int validate(float a) {
  if (a == 0) {
    printf("something wrong\n");
    return 0;
  } else {
    printf("OK\n");
    return 1;
  }
}
