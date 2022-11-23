// Daniel Trojko. Student
// trujkont Pascala rekurencyjnie
// 2022-11-22

#include <stdio.h>

#include <stdlib.h>

int truj_Pasc(int n,int k);

int main(){
    int n,k;

    printf("Podaj n : "); scanf("%d",n);
    printf("Podaj k : "); scanf("%d",k);

    printf("Wynik : %d",truj_Pasc(n,k));

}

int truj_Pasc(int n,int k)
{
   if(n==k || n==0)
      return 1;
   if(k==1 || k==n-1)
      return n;
   return truj_Pasc(n-1,k-1)+truj_Pasc(n-1,k);
}