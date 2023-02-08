# Algorytm generacji liczb Fibonacciego metodą iteracyjną

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

n	 –  	numer liczby ciągu Fibonacciego do wyliczenia, n ∈ N.

## Wyjście:

n-ta liczba ciągu Fibonacciego.

## Zmienne pomocnicze:


f 0, f 1, f	 – 	kolejne trzy liczby Fibonacciego, f 0, f 1, f ∈ C.

## Lista kroków:

K01:	f 0 ← 0	pierwsza lub f i-2 liczba Fibonacciego
K02:	f 1 ← 1	druga lub f i-1 liczba Fibonacciego
K03:	Dla i  = 0, 1, ..., n:  wykonuj kroki K04...K08	 
K04:	    Jeśli i  > 1,    to idź do K06	 
K05:	    f  ← i    i następny obieg pętli K03	 
K06:	    f  ← f 0 + f 1	obliczamy kolejną liczbę Fibonacciego
K07:	    f 0 ← f 1	zapamiętujemy wyniki obliczeń pośrednich
K08:	    f 1 ← f	dla następnego obiegu pętli
K09:	Pisz f	 
K10:	Zakończ	

## Pseudokod:
```
Fib_metoda_iteracyjna(n)
{
  f0 = 0
  f1 = 1
  
  for( i = 0; i <= n; i++ )
    if( i > 1 )
    {
      liczba_fib  = f0 + f1
      f0 = f1
      f1 = liczba_fib
    }
    else
    { 
    liczba_fib = i = i
    }
    
  return liczba_fib
}
```

## <a id="C" />C kod:
```
// Daniel Trojko, Student
// Algorytm generacji liczb Fibonacciego metodą iteracyjną
// Data: 20.11.2022
//-----------------------------

#include <stdio.h>
#include <stdlib.h>

int main( )
{
  unsigned long long f, f0, f1;
  int i, n;

  f0 = 0;
  f1 = 1;
  scanf("%d",n);
  for( i = 0; i <= n; i++ ){
    if( i > 1 )
    {
      f  = f0 + f1;
      f0 = f1;
      f1 = f;
    }
    else
    { 
      f = i;
    }
  }
  printf("%ull \n",f);
  return 0;
}
```

## C++ kod:
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
  for( i = 0; i <= n; i++ ){
    if( i > 1 )
    {
      f  = f0 + f1;
      f0 = f1;
      f1 = f;
    }
    else
    {
      f = i;
    }
  }
  cout << f << endl;
  return 0;
}
```

## Dowód:

<img width="674" alt="image" src="https://github.com/Half-Time-Demon/Algorytmy_i_struktury_danych/blob/main/Projekt/dowud_fib.png">

## Przykład używania:

Ciąg Fibonacciego oraz złota liczba pojawią się w przyrodzie, kosmosie, anatomii ludzkiego ciała, architekturze, inżynierii, sztuce, muzyce czy fizyce. Ruchy fal, huragany, skorupy ślimaków i małż, rogi muflonów, płatki roślin, galaktyki spiralne, a u wielu roślin w kolejnych latach na poszczególnych poziomach ich wzrostu liczba odgałęzień oraz liczba liści są odzwierciedleniem liczb Fibonacciego. W programowaniu wykożystuje się w programach matymatycznych,atronomicznych we programie twozenia muzyki.

## Źródła i literatura:

1.Algorytmy i struktury danych, L. Banachowski, K. Diks, W. Rytter, Wydawnictwa Naukowo - Techniczne, 2006.
2.Wprowadzenie do algorytmów, Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, Clifford Stein, Wydawnictwa Naukowo - Techniczne, 2004.
[Zastosowania ciągu Fibonacciego](https://boringowl.io/blog/ciag-fibonacciego)
