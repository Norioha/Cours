#include "triage.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
/// @brief affiche le tableau 
/// @param size 
/// @param tab 
void print(int size, int tab[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
}




/// @brief crée un tableau avec des nombres aléatoires
/// @param size 
/// @param tab 
/// @param inf 
/// @param sup 
void random_tab(int size, int tab[size], int inf, int sup)
{
    for (int i = 0; i < size; i++)
    {
        tab[i] = inf + rand() % (sup - inf + 1);
    }
}


/// @brief regarde si la valeur en binaire à la pos donné est == 0
/// si oui copie la valeur dans un tableau temporaire
/// @param size 
/// @param tab 
/// @param tab_tmp 
/// @param pos 
void alveole_0(int size, int tab[], int tab_tmp[], int pos)
{
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (bit(tab[i], pos) == 0)
        {
            tab_tmp[k] = tab[i];
            k += 1;
        }
    }
}
/// @brief regarde si la valeur en binaire à la pos donné est == 1
/// si oui copie la valeur dans un tableau temporaire
/// @param size 
/// @param tab 
/// @param tab_tmp 
/// @param pos 
void alveole_1(int size, int tab[], int tab_tmp[], int pos)
{
    int k = size - 1;
    for (int i = size - 1; i >= 0; i--)
    {
        if (bit(tab[i], pos) == 1)
        {
            tab_tmp[k] = tab[i];
            k -= 1;
        }
    }
}
/// @brief 
/// @param val 
/// @param pos 
/// @return retourne si le bit de la valeur(pos) 1 ou 0
int bit(int val, int pos)
{
    int mask = 1 << pos;
    return (val & mask) != 0;
}
/// @brief compte combien de bits est fait sur diff (a - b)
/// @param a 
/// @param b 
/// @return 
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
/// @brief 
/// @param size 
/// @param tab 
/// @return la valeur la plus petite valeur du tableau
int value_min(int size, int tab[size])
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
/// @brief 
/// @param size 
/// @param tab 
/// @return retourne la plus grande valeur du tableau
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

/// @brief fait en sorte que toutes les valeurs soit positives (décalage de nombre)
/// @param size 
/// @param tab 
/// @param val 
void decaler(int size, int tab[], int val)
{
    for (int i = 0; i < size; i++)
    {
        tab[i] -= val;
    }
}

// Fusionne deux tableaux triés
void merge(int tab_g[], int taille_g, int tab_d[], int taille_d, int res[])
{
    int i_g = 0;
    int i_d = 0;

    // Parcourir tous les éléments des deux tableaux
    for (int i = 0; i < taille_g + taille_d; i++)
    {
        // Si les deux tableaux ont des éléments non traités
        if (i_g < taille_g && i_d < taille_d)
        {
            // Choisir le plus petit élément non traité
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
        // Si seul le tableau de gauche a des éléments non traités
        else if (i_g < taille_g)
        {
            res[i] = tab_g[i_g];
            i_g += 1;
        }
        // Si seul le tableau de droite a des éléments non traités
        else if (i_d < taille_d)
        {
            res[i] = tab_d[i_d];
            i_d += 1;
        }
    }
}

// Trie un tableau en utilisant l'algorithme de tri fusion
void merge_sort(int taille, int tab[])
{
    // Si le tableau a moins de deux éléments, il est déjà trié
    if (taille < 2)
        return;

    // Diviser le tableau en deux moitiés
    int milieu = taille / 2;
    // alloue de la mémoire pour le tableau gauche qui a une taille de milieu
    int *gauche = malloc(milieu * sizeof(int)); 

    // note Malloc : malloc est une fonction en C qui est utilisée pour allouer dynamiquement de la mémoire sur le tas. 
    // Elle renvoie un pointeur vers le premier octet de la mémoire allouée. Vous pouvez alors utiliser ce pointeur pour accéder à cette mémoire. 
    //  Dans votre cas, vous utilisez cette mémoire pour stocker les éléments de vos tableaux gauche et droite.

    int *droite = malloc((taille - milieu) * sizeof(int));

    // Remplir le tableau de gauche
    for (int i = 0; i < milieu; i++)
        gauche[i] = tab[i];

    // Remplir le tableau de droite
    for (int i = milieu; i < taille; i++)
        droite[i - milieu] = tab[i];

    // Trier récursivement les deux moitiés
    merge_sort(milieu, gauche);
    merge_sort(taille - milieu, droite);

    // Fusionner les deux moitiés triées
    merge(gauche, milieu, droite, taille - milieu, tab);

    // Libérer la mémoire allouée
    free(gauche);
    free(droite);
}


void selection_sort(int size, int tab[size])
{
    // à compléter
}


// Tri rapide récursif
void quick_sort(int size, int array[size], int first, int last)
{
    // à compléter
}


/// @brief fonction principale du radix sort
/// @param size 
/// @param tab 
void radix_sort(int size, int tab[size])
{
    // init
    int val_min = value_min(size, tab);
    int val_max = value_max(size, tab);


    //décalage pour que tous les nombres soit positifs
    decaler(size, tab, val_min);
    int nb_bits = nombre_de_bits(val_max, val_min);
    //printf("%d \n",nb_bits);

    // algo
    int tab_tmp[size];
    //boucle qui regarde chaque bit de la valeur 
    for (int pos = 0; pos < nb_bits; pos++)
    {   

        alveole_0(size, tab, tab_tmp, pos);
        alveole_1(size, tab, tab_tmp, pos);
        // copy tab_tmp to tab
        for (int i = 0; i < size; i++)
        {
            tab[i] = tab_tmp[i];
        }
    }


    // post-traitement 
    decaler(size,tab,-val_min);
}


// Déterminer si le tableau est trié ou non
bool is_sorted(int size, int tab[size])
{
    for (int i = 0; i < size-1; i++)
    {
        if (tab[i] > tab[i + 1])
        {
            return false;
        }
    }
    return true;
}