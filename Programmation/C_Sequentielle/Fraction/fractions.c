#include <stdio.h> /* printf(), scanf() */

#include <stdlib.h> /* srand(), rand() */
#include <time.h>   /* time() */
#include <math.h>   /* log() */
#include <stdbool.h>
#include "fractions.h"

void ShowFraction(fraction_t frac)
{
    printf("%d\n-----\n%d\n", frac.num, frac.denom);
}

int PGCD(int num, int denom)
{
    int gcd, reste;
    while (num != 0)
    {
        reste = abs(denom) % abs(num);
        denom = num;
        num = reste;
    }
    gcd = denom;

    return gcd;
}

fraction_t IrreductibleFraction(fraction_t frac)
{
    int newNum, newDenom;

    newNum = frac.num / PGCD(frac.num, frac.denom);
    newDenom = frac.denom / PGCD(frac.num, frac.denom);

    fraction_t newFraction;
    newFraction.num = newNum;
    newFraction.denom = newDenom;

    return newFraction;
}

fraction_t addPowerToFraction(int power, fraction_t frac)
{
    frac.num *= power;
    frac.denom *= power;
    return frac;
}

void fraction_add_inplace(fraction_t frac1, fraction_t frac2, fraction_t *NewFrac)
{
    NewFrac->num = frac1.num * frac2.denom + frac1.denom * frac2.num;
    NewFrac->denom = frac1.denom * frac2.denom;
}

void fraction_sub_inplace(fraction_t frac1, fraction_t frac2, fraction_t *NewFrac)
{
    NewFrac->num = frac1.num * frac2.denom - frac1.denom * frac2.num;
    NewFrac->denom = frac1.denom * frac2.denom;
}

void fraction_mul_inplace(fraction_t frac1, fraction_t frac2, fraction_t *NewFrac)
{
    NewFrac->num = frac1.num * frac2.num;
    NewFrac->denom = frac1.denom * frac2.denom;
}

void fraction_div_inplace(fraction_t frac1, fraction_t frac2, fraction_t *NewFrac)
{
    NewFrac->num = frac1.num * frac2.denom;
    NewFrac->denom = frac1.denom * frac2.num;
}

void fraction_neg_inplace(fraction_t frac1, fraction_t *NewFrac)
{
    NewFrac->num = frac1.num * -1;
    NewFrac->denom = frac1.denom;
}

fraction_t fraction_add(fraction_t frac1, fraction_t frac2)
{
    fraction_t NewFrac;
    NewFrac.num = frac1.num * frac2.denom + frac1.denom * frac2.num;
    NewFrac.denom = frac1.denom * frac2.denom;

    NewFrac = IrreductibleFraction(NewFrac);
    return NewFrac;
}

fraction_t fraction_sub(fraction_t frac1, fraction_t frac2)
{
    fraction_t NewFrac;
    NewFrac.num = frac1.num * frac2.denom - frac1.denom * frac2.num;
    NewFrac.denom = frac1.denom * frac2.denom;

    NewFrac = IrreductibleFraction(NewFrac);
    return NewFrac;
}

fraction_t fraction_mul(fraction_t frac1, fraction_t frac2)
{
    fraction_t NewFrac;
    NewFrac.num = frac1.num * frac2.num;
    NewFrac.denom = frac1.denom * frac2.denom;

    NewFrac = IrreductibleFraction(NewFrac);
    return NewFrac;
}

fraction_t fraction_div(fraction_t frac1, fraction_t frac2)
{
    fraction_t NewFrac;
    NewFrac.num = frac1.num * frac2.denom;
    NewFrac.denom = frac1.denom * frac2.num;

    NewFrac = IrreductibleFraction(NewFrac);
    return NewFrac;
}

fraction_t fraction_neg(fraction_t frac1)
{
    fraction_t NewFrac;
    NewFrac.num = frac1.num * -1;
    NewFrac.denom = frac1.denom;
    NewFrac = IrreductibleFraction(NewFrac);
    return NewFrac;
}

double fraction_to_double(fraction_t frac1)
{
    double res = frac1.num / (double)frac1.denom;
    return res;
}
