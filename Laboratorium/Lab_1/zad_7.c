/*
Daniel Trojko, Student
* -----------------
 Laboratorium 1. Zadanie przyklad
 Poszukiwanie minimalnej albo maksymalnej.od 62 do 74 linejkki
* -----------------
2022-10-11
*/
// gcc zad_5.c -o Zad_5 -lm

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

  int suma = 0, ilosc = 0, moznik = 1, i = 0;

  //suma,ilosc,mnoznik
  ilosc = sizeof(Y) / sizeof(Y[0]);
  for (int i = 0; i <= ilosc; i++) {
    suma = suma + Y[i];
    moznik = moznik * Y[i];
  }

  printf("ilosc=%d\n", ilosc);
  printf("suma=%d\n", suma);
  printf("moznik=%d\n", moznik);

  //srednia
  printf("srednia=%d\n", ilosc / suma);

  float max= 0, min=0;
   
  for (int i = 0; i < n; i++){
    if (max < Y[i]){
      max = Y[i];
    }
    if (mix > Y[i]){
      min = Y[i];
    }

  }

  return 0;
}
