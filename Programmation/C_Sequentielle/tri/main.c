#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "triage.h"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        printf("usage: program <size> <seed> <sorting_algo_number>\n");
        printf("       - size: number of numbers in the table\n");
        printf("       - seed: seed for the random number\n");
        printf(
            "       - sorting_algo_number: 1 radix-sort, 2 merge-sort, 3 selection-sort, 4 "
            "quick-sort\n");
        return EXIT_FAILURE;
    }
    // Add variables for input here: size, seed, sorting_algo_number.
    int size = atoi(argv[1]);
    int seed = atoi(argv[2]);
    int sorting_algo_number = atoi(argv[3]);
    ;
    srand(seed);
    int res[size];
    random_tab(size, res, -50, 50);
    print(size, res);
    printf("\n");
    switch (sorting_algo_number)
    {
    case 1:
        radix_sort(size, res);
        break;
    case 2:
        merge_sort(size, res);
        break;
    /**
    case 3:
        selection_sort(size, res);
        break;
    case 4:
        quick_sort(size, res, 0, size);
        break;
    */
    default:
        printf("Choice non available\n");
        break;
    }
    print(size, res);
    printf("\n");
    if (is_sorted(size, res))
    {
        printf("The result is sorted\n");
    }
    else
    {
        printf("The result is not sorted sorted\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
