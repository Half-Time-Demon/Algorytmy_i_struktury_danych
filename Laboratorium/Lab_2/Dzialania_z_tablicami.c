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

void main(void) {
  int arr[100];
  // realizacja

  srand(time(NULL)); // use current time as seed for random generator
  // float random_variable = rand();

  /*for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
    arr[i] = rand();
    printf("%f ", arr[i]);
  }*/
  if (find(arr) == 1) {
    printf("find true\n");
  } else {
    printf("find false\n");
  }
  return;
}

// Funkcii

int size(int *arr) { return (sizeof(arr) / sizeof(arr[0])); }

int find(int *arr) {
  // int *arr2 = *arr;
  printf("%d", size(arr));
  if (size(arr) > 0) {
    int value = 5;
    for (int i = 0; i < size(arr); i++) {
      printf("%d\n", arr[i]);
      if (arr[i] == value) {
        return 1;
      }
    }
  }
  return 0;
}

void insert(int item, int pos, int *arr) { arr[pos] = item; }

void remove2(int pos, int *arr) {
  int tmp_arr[size(arr) - 1];
  for (int i = 1; i < size(arr); i++) {
    if (i != pos) {
      tmp_arr[i] = arr[i];
    } else {
      i++;
      tmp_arr[i--] = arr[i];
    }
  }
  *arr = *tmp_arr;
}

int findMax(int *arr) {
  int max = arr[0];
  for (int i = 0; i < size(arr); i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int findMin(int *arr) {
  int min = arr[0];
  for (int i = 0; i < size(arr); i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;
}

void printTable(int *arr) {
  for (int i = 0; i < size(arr); i++) {
    printf(" %d ", arr[i]);
  }
}
