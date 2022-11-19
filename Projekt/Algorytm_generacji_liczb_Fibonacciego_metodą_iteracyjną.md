# Algorytm generacji liczb Fibonacciego metodą iteracyjną

## Wejście:

### n	 –  	numer liczby ciągu Fibonacciego do wyliczenia, n ∈ N.

## Wyjście:

n-ta liczba ciągu Fibonacciego.

## Zmienne pomocnicze:


f 0, f 1, f	 – 	kolejne trzy liczby Fibonacciego, f 0, f 1, f ∈ C.

## Lista kroków:

K01:	f 0 ← 0	pierwsza lub f i-2 liczba Fibonacciego
K02:	f 1 ← 1	druga lub f i-1 liczba Fibonacciego
K03:	Dla i  = 0, 1, ..., n:
wykonuj kroki K04...K08	 
K04:	    Jeśli i  > 1,
    to idź do K06	 
K05:	    f  ← i
    i następny obieg pętli K03	 
K06:	    f  ← f 0 + f 1	obliczamy kolejną liczbę Fibonacciego
K07	    f 0 ← f 1	zapamiętujemy wyniki obliczeń pośrednich
K08:	    f 1 ← f	dla następnego obiegu pętli
K09:	Pisz f	 
K10:	Zakończ	

```
```
