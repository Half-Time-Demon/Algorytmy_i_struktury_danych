# Zadanie 2
## pseudocod Iloczyn i reszta. Realizacja z warunkem pocztkawym calkowita liczba - n, wyjsce licby(lista)
```
int iloczyn_i_reszta(liczba)
{
    int r,q,dzielnik=2;
    int lista[1][liczba/2];

    while(dzielnik<liczba/2){
        r=liczba%dzielnik;
        q=liczba/dzielnik;
        lista[0][dzielnik-2]=r;
        lista[1][dzielnik-2]=q;
        dzielnik++;
    }

    return lista;
}

```

# Udowodnienie
```
Jeśli {\displaystyle a}a oraz {\displaystyle d\neq 0}d \ne 0 są liczbami rzeczywistymi, to wykonalne jest dzielenie {\displaystyle a}a przez {\displaystyle d}d bez reszty, przy czym iloraz jest inną liczbą rzeczywistą. Jeśli jednak ograniczyć iloraz tak, by był liczbą całkowitą, to pojęcie reszty nadal okazuje się niezbędne; zachodzi wtedy odpowiednik twierdzenia o dzieleniu: istnieje jednoznacznie wyznaczony iloraz całkowity {\displaystyle q}q oraz jednoznacznie wyznaczona reszta rzeczywista {\displaystyle r,}r, które spełniają {\displaystyle a=qd+r,}a = qd + r, gdzie {\displaystyle 0\leqslant r<|d|;}0 \leqslant r < |d|; wówczas

{\displaystyle r=a-d\left\lfloor {\tfrac {a}{d}}\right\rfloor ,}r = a - d \left\lfloor\tfrac{a}{d}\right\rfloor,
gdzie {\displaystyle \lfloor \cdot \rfloor }\lfloor \cdot \rfloor  oznacza część całkowitą.

Powyższe rozszerzenie pojęcia reszty na liczby rzeczywiste nie ma wielkiego znaczenia teoretycznego w matematyce, jednak definicję tę stosuje się w wielu językach programowania oraz systemach obliczeniowych; liczbę {\displaystyle r}r wyznaczoną w powyższy sposób oznacza się czasami {\displaystyle a\ {\bmod {\ }}d,}a\ \bmod\ d, przy czym przypadek szczególny {\displaystyle a\ {\bmod {\ }}1=a-\lfloor a\rfloor }a\ \bmod\ 1 = a - \lfloor a\rfloor odpowiada mantysie {\displaystyle \{a\}.}\{a\}.

Definicja reszty (w przypadku całkowitym, jak i rzeczywistym), oprócz równości {\displaystyle a=qd+r,}a = qd + r, zawiera również nierówność {\displaystyle 0\leqslant r<|d|}0\leqslant r<|d| zapewniającą jej jednoznaczność. Czasem spotyka się również nierówność {\displaystyle -|d|<r\leqslant 0,}-|d| < r \leqslant 0, przy czym ten wybór sprawia, że reszta ma ten sam znak, co dzielnik (w przeciwieństwie do poprzedniego, w którym reszta ma znak dzielnej); z tego powodu należy mieć na uwadze konwencję stosowaną w danym języku programowania, np. C99 i Pascal zwracają resztę o tym samym znaku co dzielna (wcześniej w języku C zależało to od implementacji), z kolei Perl oraz Python dają resztę o tym samym znaku, co dzielnik; język Ada umożliwia wybranie znaku reszty.

Z punktu widzenia teorii wybór między powyższymi nierównościami jest jednak kwestią gustu, gdyż dowolny warunek postaci {\displaystyle x<r\leqslant x+|d|,}x < r \leqslant x + |d|, czy też {\displaystyle x\leqslant r<x+|d|,}x \leqslant r < x + |d|, gdzie {\displaystyle x}x jest stałą, gwarantuje jednoznaczność reszty. Zbiór reszt {\displaystyle {\bigl \{}0,1,\dots ,|d|-1{\bigr \}}}\bigl\{0, 1, \dots, |d| - 1\bigr\} jest tak wybrany ze względu na jego wygodę: znak reszty jest zgodny ze znakiem dzielnika (co można zaobserwować w Przykładach); powyższe, w języku arytmetyki modularnej, oznacza, że zamiast wspomnianego zbioru można wykorzystać dowolny zbiór liczb całkowitych przystających do liczb z tego zbioru, a w języku teorii grup, iż każdy element tego zbioru powinien być reprezentantem innej warstwy (zob. grupa ilorazowa).
```
