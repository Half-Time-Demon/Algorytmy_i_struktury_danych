# Algorytm wyszukiwania z przemieszczaniem elementów

## Wejście:

### L	 – 	zmienna obsługująca listę
### v	 –	poszukiwana wartość

## Wyjście:

### adres znalezionego elementu lub nil, jeśli elementu nie ma na liście. Znaleziony element zostaje przemieszczony na liście o jedną pozycję w kierunku jej początku.

## Zmienne pomocnicze:

### p	 – 	wskaźnik elementów listy

## Lista kroków:

### K01:	p  ← L.head	przeszukiwanie rozpoczynamy od pierwszego elementu na liście
### K02:	Jeśli p  = nil, to idź do kroku K09	 
### K03:	Jeśli ( p→data  ) ≠ v, to idź do kroku K07	sprawdzamy, czy p wskazuje poszukiwany element
### K04:	Odłącz p  od listy	jeśli tak, to zamieniamy go z poprzedzającym
### K05:	Wstaw p  przed jego poprzednik	 
### K06:	Idź do kroku K09	 
### K07:	p  ← ( p→next  )	przechodzimy do następnego elementu
### K08:	Idź do kroku K02	i kontynuujemy pętlę
### K09:	Zakończ z wynikiem p

## Pseudocod:
```
// Daniel Trojko, Student
// Samoorganizujące się listy
// Wyszukiwanie z przemieszczaniem
// Data: 04.08.2012
//------------------------------

find( v )
{
  *p

  for( p = head; p; p = p->next ) // w pętli przeszukujemy listę

    if( p->data == v )            // element znaleziony?
    {

      // odłączamy element od listy

      if( p->prev ) p->prev->next = p->next
      else break

      if( p->next ) p->next->prev = p->prev
      else tail = p->prev

      // umieszczamy go przed poprzednikiem

      p->next = p->prev
      p->prev = p->next->prev
      p->next->prev = p
      if( p->prev ) p->prev->next = p
      else head = p

      break
    }
  return p // zwracamy wynik p
}

```
## C++ cod:
```
// Daniel Trojko, Student
// Samoorganizujące się listy
// Wyszukiwanie z przemieszczaniem
// Data: 04.08.2012
//------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Element listy
//--------------
struct dlistEl
{
  dlistEl * next;     // następnik
  dlistEl * prev;     // poprzednik
  int data;
};

// Definicja obiektu listy dwukierunkowej
//---------------------------------------
class dlist
{
  public:
    dlistEl * head;  // początek listy
    dlistEl * tail;  // koniec listy

    dlist( );         // konstruktor
    ~dlist( );        // destruktor
    void printl ( int v );
    void push_front ( int v );
    void pop_front( );
    dlistEl * find ( int v );
};

//------------------------------------
// Metody obiektu listy dwukierunkowej
//------------------------------------

// Inicjuje pola zmiennej listy
//-----------------------------
dlist::dlist( )
{
  head  = tail  = NULL;
}

// Usuwa listę z pamięci
//----------------------
dlist::~dlist( )
{
  while( head ) pop_front( );
}

// Procedura wyświetla zawartość elementów listy
//----------------------------------------------
void dlist::printl ( int v )
{
  for( dlistEl * p = head; p; p = p->next )
    if( p->data == v ) cout << "(" << p->data << ")";
    else cout << " " << p->data << " ";
  cout << endl;
}

// Procedura dołączania na początek listy
//---------------------------------------
void dlist::push_front ( int v )
{
  dlistEl * p = new dlistEl;   // tworzymy nowy element
  p->data = v;
  p->prev = NULL;
  p->next = head;
  head = p;
  if( p->next ) p->next->prev = p; else tail = p;
}

// Procedura usuwa pierwszy element
//---------------------------------
void dlist::pop_front( )
{
  if( dlistEl * p = head )
  {
    if( ! ( head = p->next ) ) tail = NULL; else head->prev = NULL;
    delete p;
  }
}

// Funkcja wyszukuje element i zamienia go z poprzednikiem
//--------------------------------------------------------

dlistEl * dlist::find ( int v )
{
  dlistEl *p;

  for( p = head; p; p = p->next ) // w pętli przeszukujemy listę

    if( p->data == v )            // element znaleziony?
    {

      // odłączamy element od listy

      if( p->prev ) p->prev->next = p->next;
      else break;

      if( p->next ) p->next->prev = p->prev;
      else tail = p->prev;

      // umieszczamy go przed poprzednikiem

      p->next = p->prev;
      p->prev = p->next->prev;
      p->next->prev = p;
      if( p->prev ) p->prev->next = p;
      else head = p;

      break;
    }

  return p; // zwracamy wynik p
}

//---------------
// Program główny
//---------------

int main( )
{
  dlist L;    // obiekt listy
  int i, v;

  srand ( time ( NULL ) );  // inicjujemy liczby pseudolosowe

  for( i = 9; i >= 0; i-- ) L.push_front ( i ); // tworzymy listę

  cout << "    "; L.printl ( 10 ); // lista początkowa

  for( i = 0; i < 40; i++ ) // 40 razy wyszukujemy element
  {
    v = rand( ) % 10;       // losujemy elementy 0...9
    cout << v << ":  ";     // wyświetlamy wylosowany element
    L.find ( v );           // wyszukujemy element
    L.printl ( v );         // wyświetlamy listę
  }

  return 0;
} 
```

## Dowód:


