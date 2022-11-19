# Algorytm deszyfrowania z pseudolosowym odstępem

## Wejście:

### X	 – 	klucz, X  ∈ N
### m, a, c	 –	parametry generatora LCG, m, a, c  ∈ N
### s	 –	zaszyfrowany łańcuch tekstowy

## Wyjście:

### Rozszyfrowany łańcuch s

## Zmienne pomocnicze:


### i	 – 	indeks, i  ∈ N
### kod ( x  )	 –	zwraca kod litery x
### znak ( x  )	 –	zamienia kod x na odpowiadający mu znak ASCII

## Lista kroków:

### K01:	Dla i  = 0, 1, ..., | s | - 1: wykonuj kroki K02...K04	przetwarzamy kolejne znaki łańcucha s
### K02:	    X ← ( a  × X  + c  ) mod m	obliczamy nową liczbę pseudolosową
### K03:	    Jeśli ( s [ i  ] < 'A' ) ∨ ( s [ i  ] > 'Z' ), to następny obieg pętli K01,	pomijamy znaki nie będące literami od A do Z
### K04:	    s [ i ] ← znak ( 65 + ( kod ( s [ i  ] ) - 39 - X  mod 26 ) mod 26 )	rozszyfrowujemy
### K05:	Pisz s	wyprowadzamy tekst
### K06:	Zakończ	gotowe

## Pseudocod:
```
// Daniel Trojko, Student
// Deszyfrowanie z pseudolosowym odstępem
// Data: 20.11.2022
//-----------------------------

Deszyfrowanie_z_pseudolosowym_odstepem( )
{
  implementacja zmienych s, i, X, a, m, c;

// definiujemy generator LCG

  m = 3956280000ull;
  a = 1978141ull;
  c = 1309ull;

// odczytujemy klucz i szyfr

  wprowadzenie X; cin.ignore ( 256, '\n' );
  getline ( cin, s );

// deszyfrujemy

  for( i = 0; i < s.length( ); i++ )
  {

// obliczamy kolejną liczbę pseudolosową

    X = ( a * X + c ) % m;

// deszyfrujemy literkę

    s [ i ] = toupper ( s [ i ] );
    if( ( s [ i ] >= 'A' ) && ( s [ i ] <= 'Z' ) ) s [ i ] = 65 + ( s [ i ] - 39 - X % 26 ) % 26;
  }

// wypisujemy rozszyfrowany tekst

  wypisujemy s;
} 
```

## C++ cod:
```
// Daniel Trojko, Student
// Deszyfrowanie z pseudolosowym odstępem
// Data: 20.11.2022
//-----------------------------

#include <iostream>
#include <string>

using namespace std;

int main( )
{
  string s;
  int i;
  unsigned long long X, a, m, c;

// definiujemy generator LCG

  m = 3956280000ull;
  a = 1978141ull;
  c = 1309ull;

// odczytujemy klucz i szyfr

  cin >> X; cin.ignore ( 256, '\n' );
  getline ( cin, s );

// deszyfrujemy

  for( i = 0; i < s.length( ); i++ )
  {

// obliczamy kolejną liczbę pseudolosową

    X = ( a * X + c ) % m;

// deszyfrujemy literkę

    s [ i ] = toupper ( s [ i ] );
    if( ( s [ i ] >= 'A' ) && ( s [ i ] <= 'Z' ) ) s [ i ] = 65 + ( s [ i ] - 39 - X % 26 ) % 26;
  }

// wypisujemy rozszyfrowany tekst

  cout << s << endl << endl;
  return 0;
} 
```

## Dowód:

