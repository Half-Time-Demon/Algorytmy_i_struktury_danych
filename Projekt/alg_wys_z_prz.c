// Daniel Trojko, Student
// Samoorganizujące się listy
// Wyszukiwanie z przemieszczaniem
// Data: 04.08.2012
//------------------------------

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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