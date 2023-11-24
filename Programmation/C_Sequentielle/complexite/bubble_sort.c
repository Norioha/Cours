
#include <stdio.h>

// Fonction pour le tri à bulles
void bubbleSort(int array[], int size) {
  // Boucle pour chaque étape
  for (int step = 0; step < size - 1; ++step) {
    // Boucle pour chaque élément
    for (int i = 0; i < size - step - 1; ++i) {
      // Si l'élément actuel est plus grand que le suivant
      if (array[i] > array[i + 1]) {
        // Échange des éléments
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
