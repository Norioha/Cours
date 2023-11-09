#include <stdio.h>
// boolean datatype
#include <stdbool.h>
// fonction power C pow()
#include <math.h>
// exit success
#include <stdlib.h>
#include <time.h>
#include <stdint.h>

#define SIZE 10

int main()
{
    double tab[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        tab[i] = (double)rand() / (double)RAND_MAX;
    }
    printf("Tableau désordonné \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%lf \n", tab[i]);
    }

    int i = 0;
    while (i < SIZE)
    {
        int min_int = i;
        for (int j = i; j < SIZE; ++j)
        {
            for (int k = j + 1; k < SIZE; k++)
            {
                if (tab[k] < tab[min_int])
                {
                    min_int = k;
                }
            }
        }
        double tmp = tab[i];
        tab[i] = tab[min_int];
        tab[min_int] = tmp;
        i += 1;
    }

    printf("Tableau ordonné \n");
    for (int i = 0; i < SIZE-1; i++)
    {
        if(tab[i] > tab[i+1]){
            printf("Error tab is not sorted!");
        }
        printf("%lf \n", tab[i]);
    }

    return EXIT_SUCCESS;
}