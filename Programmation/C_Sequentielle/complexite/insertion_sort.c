#include <stdio.h>

void tri_insertion(int tab[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = tab[i];
        j = i - 1;

        /* Déplace les éléments de tab[0..i-1], qui sont
        plus grands que la clé, à une position devant
        leur position actuelle */
        while (j >= 0 && tab[j] > key) {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = key;
    }
}