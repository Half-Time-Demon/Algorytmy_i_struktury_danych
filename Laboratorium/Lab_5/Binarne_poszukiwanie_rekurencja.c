// Daniel Trojko. Student
// Binarne poszukiwanie. Implementacja rekurencja.
// 2022-12-07
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define MAX_LINE_LENGTH 1000
long long arr[MAX_LINE_LENGTH];

int szukaj(int l, int p, long szukana) 
{
     if(l>p)
       return -1;
       
	 int sr = (l+p)/2;
     
	 if(szukana == arr[sr])
	  	return sr;
    
    if(szukana < arr[sr])
        return szukaj(l,sr-1,szukana); //przeszukujemy lewą część tablicy
    else
        return szukaj(sr+1,p,szukana); //przeszukujemy prawą część tablicy
}

int main(){

	FILE *fptr;
	int number, i = 0;
    long long szukana;

	fptr = fopen("sorted.dat", "r");

	if (fptr != NULL) {
            printf("File opened successfully!\n");
	} else {
            printf("Failed to read the file.\n");
            return -1;
	}

	while ( fscanf(fptr, "%d", &number ) == 1 ) {
		arr[i] = number;
		printf("We just read %d\n", arr[i]);
		i++;
	}

	fclose(fptr);

	scanf("%d", szukana);
 
	int pozycja = szukaj(0,MAX_LINE_LENGTH-1,szukana);
 
	if(pozycja==-1)
        printf("Liczba %d nie występuje w zbiorze",szukana);
	else
        printf("Liczba %d występuje w zbiorze w komórce o numerze %d",szukana,pozycja);
 
	return 0;
}