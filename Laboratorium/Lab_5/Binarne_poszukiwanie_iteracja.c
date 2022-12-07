// Daniel Trojko. Student
// Binarne poszukiwanie. Implemenetacja iteracja.
// 2022-12-07
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define MAX_LINE_LENGTH 1000
long long arr[MAX_LINE_LENGTH];

int szukaj(int l, int p, long szukana) 
{
	int sr;
	while(l<=p)
	{
		sr = (l + p)/2;
		
		if(arr[sr] == szukana)
			return sr;
			
		if(arr[sr] > szukana)
			p = sr - 1;
		else
			l = sr + 1;
}

	return -1; //zwracamy -1, gdy nie znajdziemy elementu
}

int main(){

	FILE *fptr;
	int number, i = 0,szukana;

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
