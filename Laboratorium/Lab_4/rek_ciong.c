// Daniel Trojko. Student
// ciong fibonaciego rekurencyjnie
// 2022-11-22

#include <stdio.h>

#include <stdlib.h>

int ciong(int a,int n);

int main(){
    int a,n;

    while ((a>=1)||(n>=1)||n<2*a)
    {
       printf(" Podaj n : ") ; scanf("%d", n);
       printf(" Podaj a : "); scanf("%d", a);
    }

    printf("wynik tej funkcji jest ruwny : %d",ciong(a,n));

}

int ciong(int a,int n){
    if((n>=2^a-1)||(n<2^a))
        return a;
    else
        return ciong(a-1,n);
}