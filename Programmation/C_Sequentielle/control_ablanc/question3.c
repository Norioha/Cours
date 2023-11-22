#include <stdio.h>
#include <stdlib.h>
//note
//faire gaffe à la forme d'un fonction récursive
int fold_min(int size, int arr[]) {
    // Base case: if there's only one element in the array, return it
    if (size == 1) {
        return arr[0];
    }

    int smallest_int = fold_min(size - 1, arr);

    if (smallest_int < arr[size - 1]) {
        return smallest_int;
    } else {
        return arr[size - 1];
    }
}

int fold_max(int size,int arr[]){
    if(size == 1){
        return arr[0];
    }
    int biggest_int = fold_max(size -1 ,arr);
    if(biggest_int > arr[size-1]){
        return biggest_int;
    }
    else{
        return arr[size - 1];
    }
}
int main(int argc, char **argv) {
    const int SIZE = 6;
    int tab[SIZE];

    if (argc != SIZE + 1) {
        printf("Usage: 6 numbers\n");
        return 1;
    }

    for (int i = 1; i <= SIZE; i++) {
        tab[i - 1] = atoi(argv[i]);
    }

    for (int j = 0; j < SIZE; j++) {
        printf("%d ", tab[j]);
    }

    int smallest_int = fold_min(SIZE, tab);
    printf("\nMinimum: %d \n", smallest_int);

       int biggest_int = fold_max(SIZE, tab);
    printf("MAX: %d \n", biggest_int);

    return 0;
}
