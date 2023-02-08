#Znaleźć i skasować te same długie słowo w tekście.
```
max_dlugosc_slowa(text, textSize){
  max = 0
  j = 0
  for(i = 0; i < textSize; i++){
    if(text[i] != " "){
      j++
    }
    if(text[i] == " "){
      if(j > max){
        max = j
       }
       j = 0
    }
  }
  return max
}

brute_force_remove(text, pattern, textSize, patternSize) {
  for(i = 0; i < textSize; i++) {
    match = 0
    for(j =0; j < patternSize; j++) {
      if (text[i + j] != pattern[j]) {
        match = -1
        break
  }
	}
    if (match == true) {
       return i
    }
  }
}
```
