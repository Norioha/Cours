#include <stdio.h>

void main()
{
    int n = 36;
    int m = 90;
    int multi_n = n;
    int multi_m = m;


    int ppcm(int a, int b)
    {
        for (int i = 1; i < b; i++)
        {
            if(a * i % b == 0){
                return a* i;
            }
        }
        
    }

    /**
     * méthode 1
    while (multi_m != multi_n)
    {
        if (multi_m < multi_n)
        {
            multi_m += m;
        }
        else if (multi_m > multi_n)
        {
            multi_n += n;
        }
    }
    printf("Résultat, PPCM = %d \n",multi_m);
    méthode 2
    
    */


    printf("Résultat: %d",ppcm(36,90)); 
}
