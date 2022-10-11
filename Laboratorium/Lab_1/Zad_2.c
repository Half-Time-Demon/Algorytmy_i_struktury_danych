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
  int x0 = 0, n = 0;
  float a = 0, hx = 0;
  while (1 != validate(x, a, hx, n)) {
    printf("wprowadz liczba a=");
    scanf(" %f", &a);
    printf("wprowadz liczba n=");
    scanf(" %d", &x);
    printf("wprowadz liczba hx=");
    scanf(" %f", &hx);
    printf("wprowadz liczba n=");
    scanf(" %d", &xn);
  }
  funkcja1(x, a, hx, xn);
  return 0;
}

int validate(float x, float a, float hx, int xn) {
  if (x <= xn) {
    return 0;
  } else if (a == 0) {
    return 0;
  } else if (hx + x > xn) {
    return 0;
  } else {
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
