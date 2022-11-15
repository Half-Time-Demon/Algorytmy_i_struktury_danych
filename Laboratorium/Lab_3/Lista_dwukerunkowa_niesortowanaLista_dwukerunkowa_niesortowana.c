// Daniel Trojko, Student
// Lista dwukerunkowa niesortowana
// 2022-10-24

#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
    float value;
    struct Item *next;
    struct Item *prev;
}Item;

float find(float value, Item **head);

Item locate(float value, Item *head); // pointer

float retrieve(Item *item); // wartosc

void insert(Item *item, float value, Item *head);

void remove_by_index(Item **head, Item *item);

int size(int *head);

Item findMax(Item **head);

Item findMin(Item **head);

int printList(Item *head);

int isEmpty(Item *head);

void next(Item **head, Item *item);

void previous(Item *item, Item **head);

void makeNull(Item **head);

void main(void) {
    // realizacja

    return;
}

// Funkcii

float find(float value, Item **head){
    Item *tmp = *head;
    int position = 0;

    while (tmp->value != value && tmp->next != NULL) {
        position++;
        tmp = tmp->next;
    }

    if (tmp->value != value)
        return -1;
        
    return (position + 1);
}

Item locate(float value, Item *head){}

float retrieve(Item *item){}

void insert(Item *item, float value, Item *head){
    if (head == NULL) {
        printf("Dany wezel nie moze byc NULLem:");
        return;
    }
    item->value = value;
    item->next = head->next;
    head->next = item;
    item->prev = head;

    if (item->next != NULL) {
        item->next->prev = item;
    }
}

void remove_by_index(Item **head, Item *item){
    if (*head == NULL || item == NULL) {
        return;
    }
    if (*head == item) {
        *head = item->next;
    }
    if (item->next != NULL) {
        item->next->prev = item->prev;
    }
    if (item->prev != NULL) {
        item->prev->next = item->next;
    }
    free(item);
}

int size(int *head){
    int licznik = 0;
    if (head == NULL){
        return licznik;
    }else{
        Item *licznik = head;

    do {
      licznik++;
      licznik = licznik->next;
    } while (licznik != NULL);
  }
  return licznik;
}

Item findMax(Item **head){
    Item *max, *tmp;
    tmp = max = *head;

    while (tmp != NULL) {
        if (tmp->value > max->value)
            max = tmp;
        tmp = tmp->next;
    }
    return *max;
}

Item findMin(Item **head){
    Item *min, *tmp; 
    tmp = min = *head;

    while (tmp != NULL) {
        if (tmp->value < min->value)
            min = tmp;
        tmp = tmp->next;
    }
    return *min;
}

int printList(Item *head){
    if (head == NULL) {
        printf("Lista jest pusta:\n");
    }else{
        Item *Tmp;
        printf("\nKierunek do przodu: \n");
        while (head != NULL) {
            printf("%.1f \t", head->value);
            Tmp = head;
            head = head->next;
        }
        printf("\nKierunek do tylu:\n");
        while (Tmp != NULL) {
            printf("%.1f \t", Tmp->value);
            Tmp = Tmp->prev;
        }
    }
}

int isEmpty(Item *head){
    if (head == NULL){
        printf("List is empty");
        return 1;
    }else{
        printf("List not empty");
        return 0;
    }
}

void next(Item **head, Item *item){
    Item *variable = (Item *)malloc(sizeof(Item));
    Item *koniec = *head;

    variable->value = item ->value;
    variable->next = NULL;

    if (*head == NULL) {
        variable->prev = NULL;
        *head = variable;
        return;
    }
    while (koniec->next != NULL){
        koniec = koniec->next;
        koniec->next = variable;
        variable->prev = koniec;
    }
}

void previous(Item *item, Item **head){

    item->value = item->value;
    item->next = (*head);
    item->prev = NULL;

  if ((*head) != NULL){
    (*head)->prev = item;
    (*head) = item;
  }
}

void makeNull(Item **head){
    Item *tmp = NULL;

    while (*head != NULL) {
        tmp = (*head)->next;
        free(*head);
        *head = tmp;
    }
}
