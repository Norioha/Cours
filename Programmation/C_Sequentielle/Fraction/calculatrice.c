
#include <stdio.h> /* printf(), scanf() */

#include <stdlib.h> /* srand(), rand() */
#include <time.h>   /* time() */
#include <math.h>   /* log() */
#include <stdbool.h>
#include "fractions.h"


int main()
{

    fraction_t frac1 = {5, 10};
    fraction_t frac2 = {13, 4};
    fraction_t newFrac;

    newFrac = fraction_add(frac1, frac2);
    ShowFraction(newFrac);

    return EXIT_SUCCESS;
}