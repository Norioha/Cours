#include <stdio.h>
#include <stdint.h>

typedef struct fraction_
{
    int num;
    int denom;
} fraction_t;

fraction_t *f_create(int num, int denom)
{
    fraction_t *f_tas = malloc(sizeof(fraction_t));
    f_tas->num = num;
    f_tas->denom = denom;

    if (f_tas->denom == 0)
    {
        return NULL;
    }

    return f_tas;
}

int main()
{
    {
        // allouage de mémoire
        fraction_t *f = malloc(sizeof(fraction_t));
        // on libère la mémoire
        free(f);

        fraction_t *f = f_create(1, 2);
        f->num = 3;

        // tableau dynamique
        int *p = malloc(50 * sizeof(int));

        for (int i = 0; i < 50; i++)
        {
            p[i] = 0;
        }

        // initialize somehow
        int a = p[7];     // a == b
        int b = *(p + 7); // on avance de 7 "int"
        p[0] == *p;       // le pointeur est le premier élément

        int a = 2;
        int *b = &a;
        int **c = &b;
    }

    return 0;
}