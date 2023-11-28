#include <stdio.h>



// Fonction pour effectuer un tri par sélection
void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // Déplace la limite du sous-tableau non trié
    for (i = 0; i < n-1; i++) {
        // Trouve le minimum dans le sous-tableau non trié
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Échange le minimum trouvé avec le premier élément
        swap(&arr[min_idx], &arr[i]);
    }
}