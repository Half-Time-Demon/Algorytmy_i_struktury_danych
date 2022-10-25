// Daniel Trojko. Student
// Tablica
// 2022-10-25

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find(int *arr);

void insert(int item, int pos, int *arr);

void remove2(int pos, int *arr);

int size(int *arr);

int findMax(int *arr);

int findMin(int *arr);

void printTable(int *arr);

#include <stdio.h>

void main(void) {
  float arr[100];
  // realizacja

  srand(time(NULL)); // use current time as seed for random generator
  // float random_variable = rand();

  /*for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
    arr[i] = rand();
    printf("%f ", arr[i]);
  }*/
  int i = 1;
  if (find(&arr) == 1) {
    printf("find true\n");
  } else {
    printf("find false\n");
  }
  return;
}

// Funkcii

int size(int *arr) { return (sizeof(arr) / sizeof(&arr[0])); }

int find(int *arr) {
  // int *arr2 = *arr;
  if (size(&arr) > 0) {
    int value = 5;
    for(int i=0;i<size(arr);i++){
      if(arr[i]==value){
        printf("%d\n",arr[i]);
        //return 1;
      }
    }
  }
  return 0;
}
