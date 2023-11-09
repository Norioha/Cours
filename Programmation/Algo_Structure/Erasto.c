#include <stdio.h>
#include <stdbool.h>
#define SIZE 200

void main()
{
    bool tab[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        tab[i] = true;
    }

    tab[0] = false;
    tab[1] = false;
    for (int i = 2; i < SIZE; i++)
    {
        if (tab[i])
        {
            printf("%d", i);
            int j = i;
            while (j < SIZE)
            {
                j += i;
                tab[j] = false;
            }
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        if(tab[i]){
            printf("%d est un nombre premier \n",i);
        }
        else{
            printf("%d n'est pas un nombre premier \n",i);

        }
    }
}