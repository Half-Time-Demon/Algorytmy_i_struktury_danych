/*
Daniel Trojko, Student
* -----------------
 Laboratorium 1. Zadanie przyklad
 Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy
X(n)
* -----------------
2022-10-11
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void obliczenia(float, float, int);
int validate(float);

int main() {
  int n = 0;
  float a = 0, x = 0;
  do {
    printf("wprowadz liczba a=");
    scanf(" %f", &a);
    printf("rozmiar tablicy n=");
    scanf(" %d", &n);
    float X[n];
    for (int i = 0; i < n; i++) {
      printf("wprowadz liczba X(%d)=", i + 1);
      scanf(" %.1f", &x);
      X[i] = x;
    }
  } while (1 != validate(a));
  obliczenia(X, a, n);
  return 0;
}

int validate(float a) {
  if (a == 0) {
    printf("something wrong");
    return 0;
  } else {
    printf("200OK");
    return 1;
  }
}

void obliczenia(float X[], float a, int n) {
  int i = 0;
  float y, x;
  while (i <= n) {
    printf("iteracja %d: x=%.1f a=%.1f ", i + 1, x, a);
    y = a * pow(X[i], 2);
    printf("y=%.1f\n", y);
    i++;
  }
}
