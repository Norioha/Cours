#include <stdio.h>

// Fonction pour le tri Cocktail
void cocktailSort(int array[], int size) {
  int start = 0;
  int end = size - 1;
  int swapped = 1;
  
  while (swapped) {
    swapped = 0;
    
    // Parcours de gauche à droite
    for (int i = start; i < end; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = 1;
      }
    }
    
    // Si rien n'a été échangé, le tableau est trié
    if (!swapped)
      break;
      
    swapped = 0;
    --end;
    
    // Parcours de droite à gauche
    for (int i = end - 1; i >= start; --i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = 1;
      }
    }
    ++start;
  }
}