#include <stdio.h>
// boolean datatype
#include <stdbool.h>
// fonction power C pow()
#include <math.h>
// exit success
#include <stdlib.h>

#include <stdint.h>

int g(double x)
{

    double res = pow(x, 5) + 2 * pow(x, 4) + pow(x, 3) + pow(x, 2) - 1;
    // printf("res : %f \n", res);
    return res;
}

int sign(int number)
{
    int sign;
    if (number < 0)
    {
        sign - 1;
    }
    else if (number == 0)
    {
        sign = 0;
    }
    else
    {
        sign = 1;
    }
    return sign;
}

double calculateHalf(double a1, double b1)
{
    double c1 = (b1 + a1) / 2;
    return c1;
}
int32_t bissect(double a1, double b1, double epsilon, double *zero)
{
    int n = 0;
    double c1 = -1;
    n = log2((b1 + a1) / epsilon);
    int i = 0;
    while (g(*zero) != 0)
    {
        i++;
        *zero = calculateHalf(a1, b1);
        printf("half :%lf \n", calculateHalf(a1, b1));
        c1 = *zero;
        if (sign(g(c1)) != sign(g(a1)))
        {
            b1 = c1;
        }

        if (sign(g(c1)) != sign(g(b1)))
        {
            a1 = c1;
        }

        printf("a1: %lf, \n b1: %lf,\n c1: %lf \n", a1, b1, c1);
        if (i > n)
        {
            return -1;
        }

        if (abs(b1) - abs(a1) < epsilon)
        {
            printf("ding");
            return i;
        }
    }
    return n;
}

int main()
{
    // element de départ
    double a1;
    double b1;
    double zero;
    double epsilon;

    int nbiter;
    printf("Mettre une valeur pour a1  \n");
    scanf("%lf", &a1);

    printf("Mettre une valeur pour b1 \n");
    scanf("%lf", &b1);

    printf("Mettre une valeur pour la tolerance (upsilon) > 0 \n");
    scanf("%lf", &epsilon);

    if (a1 < b1 && epsilon > 0 && sign(g(a1)) != sign(g(b1)))
    {
        nbiter = bissect(a1, b1, epsilon, &zero);
        printf("nombre d'iteration : %d \n", nbiter);
        printf("Zero: %lf \n", zero);
    }
    else
    {
        printf("Les valeurs ne sont pas valides. \n");
        printf("Termination du programme \n");

        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}