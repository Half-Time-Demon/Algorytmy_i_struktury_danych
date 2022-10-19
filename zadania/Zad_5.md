...
//znajdujemy min
Min(tablica[],dlug_tablicy){
    
    min = Tablica[0];
    i = 0;
  
    while(i < dlugosc){
      if (Tablica[i] < min){
          min = Tablica[i];
      }
      i++;
    }
    return min;

}
...

...
//znajdujemy max
Max(tablica[],dlug_tablicy){
    
    max = Tablica[0];
    i = 0;
  
    while(i < dlugosc){
      if (Tablica[i] > max){
          max = Tablica[i];
      }
      i++;
    }
    return max;

}
...
