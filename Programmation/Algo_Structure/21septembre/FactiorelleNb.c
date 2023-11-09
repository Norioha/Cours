#include <stdio.h>

void main()
{
    while (1)
    {
        int nb = 0;
        scanf("%d", &nb);
        int fact = 1;
        int iter = 2;
        while (iter <= nb)
        {
            fact *= iter;
            iter++;
        }
        printf("La factorielle de %d est %d\n", nb, fact);
    }
}
