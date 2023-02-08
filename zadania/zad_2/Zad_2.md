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

<img width="728" alt="image" src="./Screenshot (97).png">
```
```