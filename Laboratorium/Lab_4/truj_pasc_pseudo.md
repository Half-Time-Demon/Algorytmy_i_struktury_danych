# ciong fibonaciego rekurencyjnie
```
truj_Pasc(n,k)
{
   if(n==k || n==0)
      return 1
   if(k==1 || k==n-1)
      return n
   return truj_Pasc(n-1,k-1)+truj_Pasc(n-1,k)
}
```
