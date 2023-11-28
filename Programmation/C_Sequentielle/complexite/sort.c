#include <stdio.h>
#include "utils.h"
#include "bubble_sort.h"
#include "cocktail_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "radix_sort.h"
#include "selection_sort.h"
#include "time.h"

int main(int argc, char *argv[]) {

    struct timespec tstart={0,0}, tend={0,0};

    if(argc != 3) {
        printf("Please provide exactly 2 arguments.\n");
        return 1;
    }
    int n_sort_chosen = atoi(argv[1]);
    int size = atoi(argv[2]);

    int tab[size];
    generateRandomNumbers(tab,size,9999);
    switch (n_sort_chosen)
    {       // usage avec 1000 nombres a trié
    case 1: //0.00115 seconds bubble
        for(size_t i = 0; i < 500; i++)
        {
            bubbleSort(tab,size);
            generateRandomNumbers(tab,size,9999);
        }   
        clock_gettime(CLOCK_MONOTONIC, &tstart);

        bubbleSort(tab,size);
        clock_gettime(CLOCK_MONOTONIC, &tend);
        printf("computation about %.5f seconds\n",
        ((double)tend.tv_sec + 1e-9*tend.tv_nsec) -
        ((double)tstart.tv_sec + 1e-9*tstart.tv_nsec));
        printf("\n");
        printArray(tab[size],size);
        break;
    case 2:  // 0.00094 seconds
            for(size_t i = 0; i < 500; i++)
        {
            cocktailSort(tab,size);
            generateRandomNumbers(tab,size,9999);
        }   
        clock_gettime(CLOCK_MONOTONIC, &tstart);
        cocktailSort(tab,size);
        clock_gettime(CLOCK_MONOTONIC, &tend);
        printf("computation about %.5f seconds\n",
        ((double)tend.tv_sec + 1e-9*tend.tv_nsec) -
        ((double)tstart.tv_sec + 1e-9*tstart.tv_nsec));
        break;
    case 3: //0.00042 seconds tri_insertion
        for(size_t i = 0; i < 500; i++)
        {
            tri_insertion(tab,size);
            generateRandomNumbers(tab,size,9999);
        }   
        clock_gettime(CLOCK_MONOTONIC, &tstart);
        tri_insertion(tab,size);
        clock_gettime(CLOCK_MONOTONIC, &tend);
        printf("computation about %.5f seconds\n",
        ((double)tend.tv_sec + 1e-9*tend.tv_nsec) -
        ((double)tstart.tv_sec + 1e-9*tstart.tv_nsec));
        break;
    case 4: // 0.00042 seconds quick sort
        for(size_t i = 0; i < 500; i++)
        {
            // Sort the array
            quickSort(tab, 0, size - 1);
            generateRandomNumbers(tab,size,9999);
        } 
        clock_gettime(CLOCK_MONOTONIC, &tstart);
        quickSort(tab, 0, size - 1);
        clock_gettime(CLOCK_MONOTONIC, &tend);
        printf("computation about %.5f seconds\n",
        ((double)tend.tv_sec + 1e-9*tend.tv_nsec) -
        ((double)tstart.tv_sec + 1e-9*tstart.tv_nsec));
        break;
    case 5: //0.00042 seconds merge/fusion
        for(size_t i = 0; i < 500; i++)
        {
            // Sort the array
            tri_fusion(tab, 0, size - 1);
            generateRandomNumbers(tab,size,9999);
        } 
        clock_gettime(CLOCK_MONOTONIC, &tstart);
        tri_insertion(tab,size);
        clock_gettime(CLOCK_MONOTONIC, &tend);
        printf("computation about %.5f seconds\n",
        ((double)tend.tv_sec + 1e-9*tend.tv_nsec) -
        ((double)tstart.tv_sec + 1e-9*tstart.tv_nsec));
        break;
    case 6: // radix 0.00017 sec
        for(size_t i = 0; i < 500; i++)
        {
            // Sort the array
            radix_sort(size,tab);
            generateRandomNumbers(tab,size,9999);
        } 
        clock_gettime(CLOCK_MONOTONIC, &tstart);
        radix_sort(size,tab);
        clock_gettime(CLOCK_MONOTONIC, &tend);
        printf("computation about %.5f seconds\n",
        ((double)tend.tv_sec + 1e-9*tend.tv_nsec) -
        ((double)tstart.tv_sec + 1e-9*tstart.tv_nsec));
        break;
    case 7:// selection  0.00055 seconds
            for(size_t i = 0; i < 500; i++)
        {
            // Sort the array
            selectionSort(tab,size );
            generateRandomNumbers(tab,size,9999);
        } 
        clock_gettime(CLOCK_MONOTONIC, &tstart);
       selectionSort(tab,size );
        clock_gettime(CLOCK_MONOTONIC, &tend);
        printf("computation about %.5f seconds\n",
        ((double)tend.tv_sec + 1e-9*tend.tv_nsec) -
        ((double)tstart.tv_sec + 1e-9*tstart.tv_nsec));
    default:
        break;
    }
    return 0;
}