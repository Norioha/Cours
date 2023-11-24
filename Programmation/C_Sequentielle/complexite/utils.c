#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"


// Fonction pour afficher un tableau
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

// Fonction pour échanger deux éléments
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}


void generateRandomNumbers(int arr[],int size,int max) {
    srand(time(0)); // Use current time as seed for random generator

    for(int i = 0; i < size; i++) {
        arr[i] = rand() % max + 1; // Generate random number from 1 to N
    }
}
