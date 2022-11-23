// Daniel Trojko. Student
// ciong geometryczny rekurencyjnie
// 2022-11-22

#include <stdio.h>

#include <stdlib.h>

long long geo(int n, int q);

int main()
{
int n , q ;
printf(" Podaj n : ");
scanf("%d", n );
printf(" Podaj q : ") ;
scanf("%d",q);
printf("wynik tej funkcji jest ruwny : %d",geo(n,q));
}

long long geo(int n, int q){
if(n == 1) 
    return q ;
else 
    return geo( n-1 , q )*q ; 
}