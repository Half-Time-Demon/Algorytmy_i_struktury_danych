/*
Daniel Trojko, Student
* -----------------
 Laboratorium 1. Zadanie przyklad
 Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy X(n), wyniki funckji zapisywac Y(n)
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

int main() {
  int n = 0;
  float a = 0, x = 0, y;

  do {
    printf("Podaj stala a=");
    scanf("%f", &a);
  } while (a == 0);

  do {
    printf("Podaj rozmiar tablicy X(n)=");
    scanf("%d", &n);
  } while (n < 0);

  float X[n];
  float Y[n];

  for (int i = 0; i < n; i++) {
    printf("wprowadz liczba X(%d)=", i + 1);
    scanf("%f", &x);
    X[i] = x;
  }

  for (int i = 0; i < n; i++) {
    printf("iteracja %d: x=%.1f a=%.1f ", i + 1, X[i], a);
    Y[i] = a * pow(X[i], 2);
    printf("y=%.1f\n", Y[i]);
  }

  return 0;
}
