// Daniel Trojko, Student
// Deszyfrowanie z pseudolosowym odstępem
// Data: 20.11.2022
//-----------------------------

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( )
{
  char s[256];
  int i;
  unsigned long long X, a, m, c;

// definiujemy generator LCG

  m = 3956280000ull;
  a = 1978141ull;
  c = 1309ull;

// odczytujemy klucz i szyfr

  scanf("%d",X);
  printf("\n");

// deszyfrujemy

  for( i = 0; i < str_length(s); i++ )
  {

// obliczamy kolejną liczbę pseudolosową

    X = ( a * X + c ) % m;

// deszyfrujemy literkę

    s [ i ] = toupper ( s [ i ] );
    if( ( s [ i ] >= 'A' ) && ( s [ i ] <= 'Z' ) ) s [ i ] = 65 + ( s [ i ] - 39 - X % 26 ) % 26;
  }

// wypisujemy rozszyfrowany tekst

  printf("%zu \n\n",strlen(s));
  return 0;
} 