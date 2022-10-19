Zadanie 1

Pobierz(n){ // otszymujemy faktorial napszyklad 3

    factorial = 1.0; // jes ruwne jednemu poniewaz mnozenie przez 0 nic nieda
    
    i=1 // jest ruwne jednemu poniewaz mnoxenie przez 0 nic nieda

    while (i<=n) // gdy n=3 pszejszi 3 iteracji
    {
        factorial *= i; // factorial^3 bendzie ruwny 6
        i++; // zwienka mnoznik faktorialu
    }
    
    return factorial; //zwraca faktorial
}

// gdy n=3 3!=3*2*1*1 my mozemy jego pszewrucic i nic sie nie zmieni 1*1*2*3=3!
// poniewaz faktorial musi byc wienkszy od zera factorial=1 i ciong "i" jest i=1
// "i" so krokami a faktorial poczontkowal liczba i na pierwszym kroku my
// mnozymy 1*1 zatym nastempnym krokiem mnozymy na 2 i  ostatnim krokiem 
// mnozymy na 3. 1*1*2*3=6 tak samo jak i 3!=6 to muwi nam otym ze ten pseudo 
// kod jest prawidlowy
