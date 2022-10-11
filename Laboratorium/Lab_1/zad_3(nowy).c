/*
Daniel Trojko, Student
* -----------------
 Laboratorium 1. Zadanie przyklad
 Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale. x - zmieniase z x0 do xn,
krokiem hx
* -----------------
2022-10-11
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void obliczenia(float, float, float, int);
int validate(float, float, float, int);

int main() {
  int x = 0, xn = 0;
  float a = 0, hx = 0;
  do {
    printf("wprowadz liczba a=");
    scanf(" %f", &a);
    printf("wprowadz liczba x=");
    scanf(" %d", &x);
    printf("wprowadz liczba hx=");
    scanf(" %f", &hx);
    printf("wprowadz liczba nx=");
    scanf(" %d", &xn);
  } while (1 != validate(x, a, hx, xn));
  obliczenia(x, a, hx, xn);
  return 0;
}

int validate(float x, float a, float hx, int xn) {
  if (x <= xn) {
    printf("something wrong\n");
    return 0;
  } else if (a == 0) {
    printf("something wrong\n");
    return 0;
  } else if (hx + x > xn) {
    printf("something wrong\n");
    return 0;
  } else {
    printf("OK\n");
    return 1;
  }
}

void obliczenia(float x, float a, float hx, int xn) {
  float y;
  while (x <= xn) {
    printf("x=%.1f a=%.1f ", x, a);
    y = a * pow(x, 2);
    x = x + hx;
    printf("y=%.1f\n", y);
  }
}
