#include <stdio.h>
void main()
{
    int n = 90, m = 36;
    int gcd = 1;
    for (int div = n; div >= 2; div--)
    {
        if (n % div == 0 && m % div == 0)
        {
        gcd = div;
        break;    
        }
        
    }
    printf("Le pgcd de %d et %d est %d\n",n,m,gcd);
}