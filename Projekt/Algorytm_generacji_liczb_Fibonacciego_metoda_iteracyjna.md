# Algorytm generacji liczb Fibonacciego metodą iteracyjną

## Wejście:

### n	 –  	numer liczby ciągu Fibonacciego do wyliczenia, n ∈ N.

## Wyjście:

### n-ta liczba ciągu Fibonacciego.

## Zmienne pomocnicze:


### f 0, f 1, f	 – 	kolejne trzy liczby Fibonacciego, f 0, f 1, f ∈ C.

## Lista kroków:

### K01:	f 0 ← 0	pierwsza lub f i-2 liczba Fibonacciego
### K02:	f 1 ← 1	druga lub f i-1 liczba Fibonacciego
### K03:	Dla i  = 0, 1, ..., n:  wykonuj kroki K04...K08	 
### K04:	    Jeśli i  > 1,    to idź do K06	 
### K05:	    f  ← i    i następny obieg pętli K03	 
### K06:	    f  ← f 0 + f 1	obliczamy kolejną liczbę Fibonacciego
### K07	    f 0 ← f 1	zapamiętujemy wyniki obliczeń pośrednich
### K08:	    f 1 ← f	dla następnego obiegu pętli
### K09:	Pisz f	 
### K10:	Zakończ	

## Pseudokod:
```
// Daniel Trojko, Student
// Algorytm generacji liczb Fibonacciego metodą iteracyjną
// Data: 20.11.2022
//-----------------------------

Fib_metoda_iteracyjna( )
{
  n = 0
  f = 0
  f0 = 0
  f1 = 1
  wprowadz n
  for( i = 0; i <= n; i++ )
    if( i > 1 )
    {
      f  = f0 + f1
      f0 = f1
      f1 = f
    }
    else f = i
  return f
}
```

## C++ cod:
```
// Daniel Trojko, Student
// Algorytm generacji liczb Fibonacciego metodą iteracyjną
// Data: 20.11.2022
//-----------------------------

#include <iostream>

using namespace std;

int main( )
{
  unsigned long long f, f0, f1;
  int i, n;

  f0 = 0;
  f1 = 1;
  cin >> n;
  for( i = 0; i <= n; i++ )
    if( i > 1 )
    {
      f  = f0 + f1;
      f0 = f1;
      f1 = f;
    }
    else f = i;
  cout << f << endl;
  return 0;
}
```

## Dowód:

<img width="674" alt="image" src="https://github.com/Half-Time-Demon/Algorytmy_i_struktury_danych/blob/main/Projekt/dowud_fib.png">
