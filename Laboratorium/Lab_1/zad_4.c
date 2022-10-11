/*
Daniel Trojko, Student
* -----------------
 Laboratorium 1. Zadanie przyklad
 Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy
X(n)
* -----------------
2022-10-11
*/
// gcc zad_4.c -o Zad_4 -lm
// ./Zad4

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
    int n;
    printf("Prosze, podac dlugosc tablicy:");
    scanf("%d", &n);
    double a, x[n], y[n];
    
    printf("Prosze, podac a:");
    scanf("%lf", &a);
    
    for(int i=0; i < n; i++)
    {
        printf("Podaj x%d:", i+1);
        scanf("%lf", &x[i]);
    }
    for(int i=0; i < n; i++)
    {
        y[i] = (a*x[i]*x[i]); //zapisuji do tablicy
        printf("Wynik: y = %.lf , a = %.lf , x z Tablicy = %.lf \n", y[i], a, x[i]);
    }
    }
