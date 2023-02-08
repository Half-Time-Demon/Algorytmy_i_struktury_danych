// Daniel Trojko, Student
// Lista cykliczna
// 2022-10-24

#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
    float value;
    struct Item *next;
    struct Item *prev;
}Item;

float find(float value, int *head);

float locate(float value, int *head); // pointer

float retrieve(Item *item); // wartosc

void insert(Item *item, float value, Item *head);

void remove(Item *item, Item *head);

int size(int *head);

Item findMax(int *head);

Item findMin(int *head);

int printList(int *head);

int isEmpty(int *head);

void next(Item *item, Item *head);

void previous(Item *item, Item *head);

void makeNull(int *head);

void main(void) {
    // realizacja

    return;
}

// Funkcii

float find(float value, int *head){}

float locate(float value, int *head){}

float retrieve(Item *item){}

void insert(Item *item, float value, Item *head){}

void remove(Item *item, Item *head){}

int size(int *head){}

Item findMax(int *head){}

Item findMin(int *head){}

int printList(int *head){}

int isEmpty(int *head){}

void next(Item *item, Item *head){}

void previous(Item *item, Item *head){}

void makeNull(int *head){}