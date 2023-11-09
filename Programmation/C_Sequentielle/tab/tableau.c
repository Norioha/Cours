#include <stdio.h>
// boolean datatype
#include <stdbool.h>
// fonction power C pow()
#include <math.h>
// exit success
#include <stdlib.h>

#include <stdint.h>

void printTab(int32_t *tab, int32_t size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%i \n", tab[i]);
    }
}

void printSmallestValue(int32_t *tab, int32_t size)
{
    int32_t minVal = tab[0];
    for (int i = 0; i < size; i++)
    {
        if (minVal > tab[i])
        {
            minVal = tab[i];
        }
    }
    printf("La valeur la plus petite est : %i \n", minVal);
}

void placeBiggestValueInTheEnd(int32_t *tab, int32_t size)
{
    int32_t BiggestValue = -1;
    int32_t BiggestValueIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (BiggestValue < tab[i])
        {
            BiggestValue = tab[i];
            BiggestValueIndex = i;
        }
    }
    int32_t ValueInLastIndex = tab[size - 1];
    tab[size - 1] = BiggestValue;
    tab[BiggestValueIndex] = ValueInLastIndex;
}

void searchValueInTab(int32_t *tab, int32_t size)
{
    int UserInput = -1;
    printf("Entrer une valeur pour chercher son index associé \n");
    scanf("%i", &UserInput);
    for (int i = 0; i < size; i++)
    {
        if (UserInput == tab[i])
        {
            printf("L'index de %i est %i \n", UserInput, i);
            break;
        }
        else
        {
            printf("Pas d'indice de trouvé \n");
        }
    }
}

int32_t calculateAverageOfTab(int32_t *tab, int32_t size)
{
    int32_t sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += tab[i];
    }
    int32_t average = sum / size;
    printf("La moyenne des valeurs est %i \n", average);
    return average;
}

void calculateVariencyTab(int32_t *tab, int32_t size)
{
    int32_t variance;
    int32_t sum;
    int32_t tabM = calculateAverageOfTab(tab, size);
    for (int i = 0; i < size - 1; i++)
    {
        sum += pow(tab[i] - tabM, 2);
    }
    variance = (1 / size) * sum;
    printf("La variance du tab est : %d \n", variance);
}

void sortTab(int32_t *tab, int32_t size)
{
    int i = 0;
    while (i < size)
    {
        int min_int = i;
        for (int j = i; j < size; ++j)
        {
            for (int k = j + 1; k < size; k++)
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
    printf("Tableau croissant \n");
    printTab(tab, size);
}
void calculateMedian(int32_t *tab, int32_t size)
{

    int32_t median = (tab[(size - 1) / 2] + tab[size / 2]) / 2.0;
    printf("median : %i \n", median);
}

void displayTabFrequency(int32_t *histo, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (histo[i] != -1)
        {
            printf("%i : %i \n", i, histo[i]);
        }
    }
}

void calculateFrequencyNumber(int32_t *tab, int32_t size, int val_max)
{
    int32_t histo[size];
    int count;
    for (int k = 0; k < val_max; k++)
    {
        histo[k] = -1;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (tab[i] == tab[j])
            {
                count += 1;
                histo[j] = 0;
            }
        }
        if (histo[i] != 0)
        {
            histo[i] = count;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (histo[i] != 0)
        {
            printf("%i \n", histo[i]);
        }
    }
}

// size 100 val_max = 11 -> 0 à 10
int main()
{
    int32_t size = 1;
    int val_max = 11;
    printf("Entrer la valeur de size : ");

    scanf("%i", &size);
    int32_t tab[size];

    for (int i = 0; i < size; i++)
    {
        tab[i] = rand() % val_max; // 0 à 10;
    }

    printTab(tab, size);

    printSmallestValue(tab, size);

    placeBiggestValueInTheEnd(tab, size);

    printTab(tab, size);

    // searchValueInTab(tab,size);

    // calculateAverageOfTab(tab, size);
    calculateVariencyTab(tab, size);

    sortTab(tab, size);
    calculateMedian(tab, size);
    calculateFrequencyNumber(tab, size, val_max);
    return EXIT_SUCCESS;
}
