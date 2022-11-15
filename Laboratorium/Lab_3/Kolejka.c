// Daniel Trojko, Student
// kolejka
// 2022-10-24

#include <stdio.h>
#include <stdlib.h>
    
typedef struct Item {
    int front, rear, value;
    int *array;
    unsigned capacity;
}Item;

Item *create(unsigned capacity);

void insert(Item *queue, int item);

void delete(Item *queue);

void main(void) {
    // realizacja
    Item begin, end; // Koniec i poczantek
    return;
}
// Funkcii

Item *create(unsigned capacity) {
    Item *queue = (Item *)malloc(sizeof(Item));
    queue->capacity = capacity;
    queue->front = queue->value = 0;

    queue->rear = capacity - 1;
    queue->array = (int *)malloc(queue->capacity * sizeof(int));
    return queue;
}

void insert(Item *queue, int item){
    if (queue->value == queue->capacity)
        return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->value = queue->value + 1;
    printf("%d w kolejce \n", item);
}

void delete(Item *queue){
    if (queue->value == 0)
        return;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->value = queue->value - 1;
    return item;
}
