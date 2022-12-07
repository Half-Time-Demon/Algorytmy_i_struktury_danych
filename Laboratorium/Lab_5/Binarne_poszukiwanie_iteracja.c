#include<iostream>
#include <stdio.h>
#include <errno.h>

using namespace std;

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
	int number, i = 0;

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

	cin>>szukana;
 
	int pozycja = szukaj(0,n-1,szukana);
 
	if(pozycja==-1)
		cout<<"Liczba "<<szukana<<" nie występuje w zbiorze"<<endl;
	else
		cout<<"Liczba "<<szukana
<<" występuje w zbiorze w komórce o numerze "<<pozycja<<endl;
 
	return 0;
}