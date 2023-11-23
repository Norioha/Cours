#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
void triBulle(int n, int tab[n])
{
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (tab[i] > tab[i + 1])
            {
                int temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
            }
        }
    }
}

void print(int n, int tab[n])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", tab[i]);
    }
}

int main()
{
    int tab[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        tab[i] = rand() % 100 + 1;
    }
    printf("Tableau désordonné \n");
    print(SIZE,tab);

    triBulle(SIZE,tab);
    printf("\n");
    printf("Tableau ordonné \n");
    print(SIZE,tab);
}
