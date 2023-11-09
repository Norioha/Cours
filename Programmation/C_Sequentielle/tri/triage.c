#include "triage.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void print(int size, int tab[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
}
int size_array(int tab[])
{
    int size = sizeof(tab) / sizeof(tab[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
    }
    return count;
}
void swap(int *a, int *b)
{
    int size = size_array(a);
    for (int i = 0; i < size; i++)
    {
        int temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

void random_tab(int size, int tab[size], int inf, int sup)
{
    for (int i = 0; i < size; i++)
    {
        tab[i] = inf + rand() % (sup - inf + 1);
    }
}

void selection_sort(int size, int tab[size])
{
    // à compléter
}

void alveole_0(int size, int tab[size], int tab_tmp[size], int pos)
{
    int k = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (bit(tab[i], pos) == 0)
        {
            tab_tmp[k] = tab[i];
            k += 1;
        }
    }
}

void alveole_1(int size, int tab[size], int tab_tmp[size], int pos)
{
    int k = size - 1;
    for (int i = size - 1; i > 0; i--)
    {
        if (bit(tab[i], pos) == 0)
        {
            tab_tmp[k] = tab[i];
            k -= 1;
        }
    }
}

int bit(int val, int pos)
{
    int mask = 1 << pos;
    return (val & mask) != 0;
}
int nombre_de_bits(int a, int b)
{
    int count = 0;
    int diff = a - b;
    while (diff > 0)
    {
        diff >>= 1; // décalage vers la droite pour vérifier chaque bit
        count++;
    }
    return count;
}

int value_min(int size, int tab[])
{
    int min = tab[0];
    for (int i = 0; i < size; i++)
    {
        if (min > tab[i])
        {
            min = tab[i];
        }
    }
    return min;
}

int value_max(int size, int tab[])
{
    int max = tab[0];
    for (int i = 0; i < size; i++)
    {
        if (max < tab[i])
        {
            max = tab[i];
        }
    }
    return max;
}
void decaler(int size, int tab[size], int val)
{
    for (int i = 0; i < size - 1; i++)
    {
        tab[i] += val;
    }
}

void merge(int tab_g[], int tab_d[], int res[])
{
    int g = size_array(tab_g);
    int d = size_array(tab_d);
    int i_g = 0;
    int i_d = 0;

    for (int i = 0; i < g + d; i++)
    {
        if (i_g < g && i_d < d)
        {
            if (tab_g[i_g] < tab_d[i_d])
            {
                res[i] = tab_g[i_g];
                i_g += 1;
            }
            else
            {
                res[i] = tab_d[i_d];
                i_d += 1;
            }
        }
        else if (i_g < g)
        {
            res[i] = tab_g[i_g];
            i_g += 1;
        }
        else if (i_d < d)
        {
            res[i] = tab_d[i_d];
            i_d += 1;
        }
    }
}

void merge_sort(int size, int tab[size])
{
    int tab_tmp[size];
    int nb_steps = log2(size) + 1;
    int t_tranche;
    int left;
    for (int i = 0; i < nb_steps - 1; i++)
    {
        left = 0;
        t_tranche = pow(2, i);
        while (left < size)
        {
            merge(
                tab[left + t_tranche - 1],
                tab[left + t_tranche + 2 * t_tranche - 1],
                tab_tmp[left + 2 * t_tranche - 1]);
            left += 2 * t_tranche;
        }
        swap(tab, tab_tmp);
    }
}

// Tri rapide récursif
void quick_sort(int size, int array[size], int first, int last)
{
    // à compléter
}

// Déterminer si le tableau est trié ou non
bool is_sorted(int size, int tab[size])
{
    for (int i = 0; i < size; i++)
    {
        if (tab[i] > tab[i + 1])
        {
            return false;
        }
    }
    return true;
}

void radix_sort(int size, int tab[size])
{
    // init
    int val_min = value_min(size, tab);
    int val_max = value_max(size, tab);
    decaler(size, tab, val_min);
    int nb_bits = nombre_de_bits(val_max, val_min);

    // algo
    int tab_tmp[size];
    for (int pos = 0; pos < nb_bits; pos++)
    {
        alveole_0(size, tab, tab_tmp, pos);
        alveole_1(size, tab, tab_tmp, pos);
    }

    // post-traitement
    decaler(size,tab,-val_min);
}
