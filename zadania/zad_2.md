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
{{Zobacz też|modulo}}
Jeśli <math>a</math> oraz <math>d \ne 0</math> są [[liczby rzeczywiste|liczbami rzeczywistymi]], to wykonalne jest dzielenie <math>a</math> przez <math>d</math> bez reszty, przy czym iloraz jest inną liczbą rzeczywistą. Jeśli jednak ograniczyć iloraz tak, by był liczbą całkowitą, to pojęcie reszty nadal okazuje się niezbędne; zachodzi wtedy odpowiednik twierdzenia o dzieleniu: istnieje jednoznacznie wyznaczony iloraz całkowity <math>q</math> oraz jednoznacznie wyznaczona reszta rzeczywista <math>r,</math> które spełniają <math>a = qd + r,</math> gdzie <math>0 \leqslant r < |d|;</math> wówczas
: <math>r = a - d \left\lfloor\tfrac{a}{d}\right\rfloor,</math>
gdzie <math>\lfloor \cdot \rfloor</math> oznacza [[podłoga i sufit|część całkowitą]].

Powyższe rozszerzenie pojęcia reszty na liczby rzeczywiste nie ma wielkiego znaczenia teoretycznego w matematyce, jednak definicję tę stosuje się w wielu [[język programowania|językach programowania]] oraz systemach obliczeniowych; liczbę <math>r</math> wyznaczoną w powyższy sposób oznacza się czasami <math>a\ \bmod\ d,</math> przy czym przypadek szczególny <math>a\ \bmod\ 1 = a - \lfloor a\rfloor</math> odpowiada [[Podłoga i sufit#Mantysa|mantysie]] <math>\{a\}.</math>

Definicja reszty (w przypadku całkowitym, jak i rzeczywistym), oprócz równości <math>a = qd + r,</math> zawiera również nierówność <math>0 \leqslant r < |d|</math> zapewniającą jej jednoznaczność. Czasem spotyka się również nierówność <math>-|d| < r \leqslant 0,</math> przy czym ten wybór sprawia, że reszta ma ten sam znak, co dzielnik (w przeciwieństwie do poprzedniego, w którym reszta ma znak dzielnej); z tego powodu należy mieć na uwadze konwencję stosowaną w danym języku programowania, np. [[C99]] i [[Pascal (język programowania)|Pascal]] zwracają resztę o tym samym znaku co dzielna (wcześniej w języku C zależało to od implementacji), z kolei [[Perl]] oraz [[Python]] dają resztę o tym samym znaku, co dzielnik; język [[Ada (język programowania)|Ada]] umożliwia wybranie znaku reszty.

Z punktu widzenia teorii wybór między powyższymi nierównościami jest jednak kwestią gustu, gdyż dowolny warunek postaci <math>x < r \leqslant x + |d|,</math> czy też <math>x \leqslant r < x + |d|,</math> gdzie <math>x</math> jest stałą, gwarantuje jednoznaczność reszty. Zbiór reszt <math>\bigl\{0, 1, \dots, |d| - 1\bigr\}</math> jest tak wybrany ze względu na jego wygodę: znak reszty jest zgodny ze znakiem dzielnika (co można zaobserwować w [[#Przykłady|Przykładach]]); powyższe, w języku [[arytmetyka modularna|arytmetyki modularnej]], oznacza, że zamiast wspomnianego zbioru można wykorzystać dowolny zbiór liczb całkowitych [[Kongruencja (algebra)|przystających]] do liczb z tego zbioru, a w języku [[teoria grup|teorii grup]], iż każdy element tego zbioru powinien być [[relacja równoważności|reprezentantem]] innej [[warstwa (teoria grup)|warstwy]] (zob. [[grupa ilorazowa]]).

```
