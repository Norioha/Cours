#include <stdio.h>

// Fusionne deux sous-tableaux de tab[].
// Le premier sous-tableau est tab[l..m]
// Le deuxième sous-tableau est tab[m+1..r]
void fusion(int tab[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Créer des tableaux temporaires
    int L[n1], R[n2];

    // Copier les données dans les tableaux temporaires L[] et R[]
    for (i = 0; i < n1; i++)
        L[i] = tab[l + i];
    for (j = 0; j < n2; j++)
        R[j] = tab[m + 1 + j];

    // Fusionner les tableaux temporaires en un seul tableau tab[l..r]

    i = 0; // Index initial du premier sous-tableau
    j = 0; // Index initial du deuxième sous-tableau
    k = l; // Index initial du sous-tableau fusionné
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            tab[k] = L[i];
            i++;
        } else {
            tab[k] = R[j];
            j++;
        }
        k++;
    }

    // Copier les éléments restants de L[], si il y en a
    while (i < n1) {
        tab[k] = L[i];
        i++;
        k++;
    }

    // Copier les éléments restants de R[], si il y en a
    while (j < n2) {
        tab[k] = R[j];
        j++;
        k++;
    }
}

// l est pour l'index de gauche et r est l'index de droite du sous-tableau de tab à trier
void tri_fusion(int tab[], int l, int r) {
    if (l < r) {
        // Même que (l+r)/2, mais évite le débordement pour les grands l et h
        int m = l + (r - l) / 2;

        // Trier la première et la deuxième moitié
        tri_fusion(tab, l, m);
        tri_fusion(tab, m + 1, r);

        fusion(tab, l, m, r);
    }
}