/*
Daniel Trojko, Student
* -----------------
 Laboratorium 1. Zadanie przyklad
 Oblicza funkcja y = ax^2 znaczenia, gdy a i x zmeniaja sie jednoczesnie: a=1
krokiem 0.5, x=2 do 6 krokiem 2
* -----------------
2022-10-11
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void funkcja1(float, float);

int main() {
  float x = 2, a = 1;
  funkcja1(x, a);
  return 0;
}

void funkcja1(float x, float a) {
  float y;
  while (x <= 6) {
    printf("x=%.f a=%.1f ", x, a);
    y = a * pow(x, 2);
    a = a + 0.5;
    x = x + 2;
    printf("y=%.f\n", y);
  }
}
