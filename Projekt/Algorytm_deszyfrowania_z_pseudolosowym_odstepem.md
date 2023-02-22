# Algorytm deszyfrowania z pseudolosowym odstępem

## Praca wykonal [Daniel Trojko](https://github.com/Half-Time-Demon/)

## Projekt do przedmiotu "Algorytmy i struktury danych"

## Data 2023-01-20

- [Wejście](#Wejście)
- [Wyjście](#Wyjście)
- [Zmienne pomocnicze](#zmienne-pomocnicze)
- [Lista kroków](#lista-kroków)
- [Pseudokod](#Pseudokod)
- [C kod](#c-kod)
- [C++ kod](#c-kod-1)
- [Dowód](#Dowód)
- [Przykład używania](#przykład-używania)
- [Źródła i literatura](#żródła-i-literatura)


## Wejście:

X	 – 	klucz, X  ∈ N
m, a, c	 –	parametry generatora LCG, m, a, c  ∈ N
s	 –	zaszyfrowany łańcuch tekstowy

## Wyjście:

Rozszyfrowany łańcuch s

## Zmienne pomocnicze:


i	 – 	indeks, i  ∈ N
kod ( x  )	 –	zwraca kod litery x
znak ( x  )	 –	zamienia kod x na odpowiadający mu znak ASCII

## Lista kroków:

K01:	Dla i  = 0, 1, ..., | s | - 1: wykonuj kroki K02...K04	przetwarzamy kolejne znaki łańcucha s
K02:	    X ← ( a  × X  + c  ) mod m	obliczamy nową liczbę pseudolosową
K03:	    Jeśli ( s [ i  ] < 'A' ) ∨ ( s [ i  ] > 'Z' ), to następny obieg pętli K01,	pomijamy znaki nie będące literami od A do Z
K04:	    s [ i ] ← znak ( 65 + ( kod ( s [ i  ] ) - 39 - X  mod 26 ) mod 26 )	rozszyfrowujemy
K05:	Pisz s	wyprowadzamy tekst
K06:	Zakończ	gotowe

## Pseudokod:
```
// Daniel Trojko, Student
// Deszyfrowanie z pseudolosowym odstępem
// Data: 20.11.2022
//-----------------------------

Deszyfrowanie_z_pseudolosowym_odstepem(s, X, a, m, c )
{
// deszyfrujemy

  for( i = 0; i < s.length( ); i++ )
  {

// obliczamy kolejną liczbę pseudolosową

    X = ( a * X + c ) % m

// deszyfrujemy literkę

    s [ i ] = toupper ( s [ i ] )
    if( ( s [ i ] >= 'A' ) && ( s [ i ] <= 'Z' ) ){ 
      s [ i ] = 65 + ( s [ i ] - 39 - X % 26 ) % 26
  }

// wypisujemy rozszyfrowany tekst

  return s
} 
```

## C kod:
```
// Daniel Trojko, Student
// Deszyfrowanie z pseudolosowym odstępem
// Data: 20.11.2022
//-----------------------------

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
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
```

## C++ kod:
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

Zasada rozszyfrowywania jest prawie identyczna jak przy szyfrowaniu. Jedyna różnica leży we wzorze obliczania kodu znaku z kodu szyfru:
ch  = 65 + ( ch  - 39 - X  mod 26 ) mod 26

Program odczytuje kolejno klucz X oraz łańcuch s, który rozszyfrowuje kodem o pseudolosowym odstępie i wypisuje wynik. Parametry generatora LCG są zdefiniowane wewnątrz programu. Zakres kluczy wynosi od 0 do 3956279999.

zalóżmy że robimy po koleji 3 razy z nastempujoncymi kluczami "1001,1002,1003" dla szyfrowania np. oto takiego komunikatu:
" AAAAAA NIEPRZYJACIEL ZAATAKUJE W NOCY AAAAAA "

## szyfrowanie:

<img width="674" alt="image" src="https://github.com/Half-Time-Demon/Algorytmy_i_struktury_danych/blob/main/Projekt/szyfrowanie.png">

## Przykład używania:

deszyfrowania z pseudolosowym odstępem było stosowane w drugiej wojnie światowej poniewaz machina ["Enigma"](https://ru.wikipedia.org/wiki/%D0%AD%D0%BD%D0%B8%D0%B3%D0%BC%D0%B0) szyfrowała z psedolosowym odstępem. Aby ukryć odstępy między wyrazami, które pozwalają zidentyfikować słowa, można wpisywać w ich miejsce wybraną literkę (np. X – tak postępowali operatorzy niemieckich maszyn Enigma w czasie II Wojny Światowej ). Wtedy szyfr stanie się jednolitym blokiem liter.

Zaruwno w nasze czasy stosuje się deszyfrowania z pseudolosowym odstępem w VPN aby odrzyfrowac zaszyfrowane dane. w internecie gdy logujemy się odsyla się zaszyfrowany password do servera i na serweże deszyfruje się aby sprawdzic cz są jedentyczne.

## Źródła i literatura:

- [Szyfr Vigenère’a](https://pl.wikipedia.org/wiki/Szyfr_Vigen%C3%A8re%E2%80%99a)
- ["Enigma"](https://com.wikipedia.org/wiki/%D0%AD%D0%BD%D0%B8%D0%B3%D0%BC%D0%B0)
