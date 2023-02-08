// Daniel Trojko, Student
// Stos
// 2022-10-24

#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
    float value;
    struct Item *next;
}Item;

void top(float value, Item **head); //???

void makeNull(Item **head);

void pop(Item **head);

void push(Item **head, float value);

int isEmpty(Item *head);

void print_list(Item *head);

void main(void) {
    // realizacja
    Item *head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    print_list(head);
    pop(&head);
    print_list(head);
    isEmpty(head);
    makeNull(&head);
    print_list(head);
    getchar();
    getchar();

    return;
}
// Funkcii

void push(Item **head, float value){
    if (*head) {
        Item *new = (Item *)malloc(sizeof(Item));
        new->value = (*head)->value;
        new->next = (*head)->next;
        (*head)->value = value;
        (*head)->next = new;
    }else{
        (*head) = malloc(sizeof(Item));
        (*head)->value = value;
        (*head)->next = NULL;
    }    
}

void print_list(Item *head) {
    if(head){
        while (head->next != NULL) {
            printf("%d\n\n", head->value);
            head = head->next;
        }
        printf("%d\n\n", head->value);
    }
}

void pop(Item **head) {

    Item *to_delete = NULL;

    if((*head)->next == NULL){
        free(*head);
        *head = NULL;
        return;
    }
    (*head)->value = (*head)->next->value;
    (*head)->next = (*head)->next->next;

}  

int isEmpty(Item *head){
    if(head == NULL){
        printf("stack is empty");
        return 0;
    }else{
        printf("stack not empty");
        return 1;
    }

} 

void makeNull(Item **head) {

    Item *tmp = *head;
    Item *next;
    if(tmp != NULL){
        while(!tmp) {
            next = tmp->next;
            free(tmp);
            tmp = next;
        }
        *head = NULL;
        printf("stack deleted\n");
    }else{
        printf("No existing stack\n");
    }
}

void top(float value, Item **head){

}