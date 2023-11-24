#include <stdio.h>


/* Cette fonction prend le dernier élément comme pivot, place
   le pivot à sa place correcte dans le tableau trié,
   et place tous les éléments plus petits (plus petits que le pivot)
   à gauche du pivot et tous les éléments plus grands à droite du pivot */
int partition (int arr[], int low, int high) {
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index du plus petit élément

    for (int j = low; j <= high- 1; j++) {
        // Si l'élément actuel est plus petit que le pivot
        if (arr[j] < pivot) {
            i++;    // incrémenter l'index du plus petit élément
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* La fonction principale qui implémente le QuickSort
 arr[] --> Tableau à trier,
  low  --> Index de début,
  high  --> Index de fin */
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        /* pi est l'index de partitioning, arr[p] est maintenant
           à la bonne place */
        int pi = partition(arr, low, high);

        // Tri séparément les éléments avant
        // la partition et après la partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}