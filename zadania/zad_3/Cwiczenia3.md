## Big-O i Big-Omega
# Zadania

Czy jest 2n + 1 ∊ Θ(2n)?

Czy jest (x + y)² ∊ Θ(x² + y²)?

Czy jest 17 ∊ Θ(1)?

Czy jest 2(n - 1)/2 ∊ Θ(n²)?

Czy jest max(n³,10n²) ∊ Θ(n³)?

Czy jest $ \sum_{i=1}^{n}i^k ∊ Θ(n^{k+1})$ i Ω(n^{k+1}) dla calkowitych k?


# Uporządkuj następujące funkcje według rosnącej

(1/2)ⁿ,  
17,  
loglogn,  
logn,  
log²n,  
n/logn,  
√nlog²n,  
n,  
(3/2)ⁿ


# Oblicz złożoność czasową dla każdego fragmentu kodu ćwiczenia.
```
 function someFunction(n) {  
       i, j = 0;  
       for (i; i < n*1000 ; i++) {  
           for (j; j < n*20; j++) {  
               printf("%d", i + j);  
           }  
       }  
   }  
```
Dominujace linii: 3,4,5  
Niedominujace linii: 2 
Złożoność kwadratowa 

```
 function someFunction(n) {  
       i, j, k, l = 0;  
       for (i; i < n ; i++) {  
           for (j; j < n; j++) {  
               for (k; k < n; k++) {  
                   for (l; l < 10; l++) {  
                       printf("%d", i + j + k + l);  
                   }  
              }  
           }  
       }  
  }  
``` 
Dominujace linii: 3, 4, 5, 6 
Niedominujace linii: 2 
Złożoność do 4 potęgi


# Notacja Big-O
```
 function someFunction(n) {  
       i = 0;  
       for (i; i < 1000 ; i++) {  
           printf("%d", i);  
       }  
   }  
```
Złożoność liniowa

``` 
 function someFunction(n) {  
       i = 0;  
       for (i; i < n * 10 ; i++) {  
           printf("%d", i);  
       }  
   }  
```
Złożoność liniowa

```
 function someFunction(n) {   
       i = 0;  
       for (i; i < n  ; i = i * 2) {  
           printf("%d", i);  
       }  
   }  
```
Złożoność logarytmiczna

```
 function someFunction(n) {  
       while (true) {  
           printf("%d", n);  
       }  
   }  
```
Złożoność nieskończona
