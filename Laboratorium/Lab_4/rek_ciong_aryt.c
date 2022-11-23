// Daniel Trojko. Student
// ciong arytmetyczny rekurencyjnie
// 2022-11-22

#include <stdio.h>

#include <stdlib.h>

long int c_a(int n, int a, int r);

int main ()
{
    int a,r,n,k;

    printf("Podaj a: "); scanf("%d",a);
    printf("Podaj r : "); scanf("%d",r);
    printf("Ktory wyaraz wyznaczyc?  "); scanf("%d",n);
    printf("%d - wyraz ciagu arytmetycznego = %d",n,c_a(n,a,r));
    printf("Ile wyrazow wypisac?  "); scanf("%d",k);
    
    for (int i=1; i<=k; i++)
        printf("%d = %d",i,c_a(i,a,r));

    return 0;
}

long int c_a(int n, int a, int r)
{
    if (n==1)
        return a;
    else
        return c_a(n-1,a,r)+r; 
}