#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    matrix_t mat;
    int32_t m = 3, n = 3;
    int32_t data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int32_t s = m * n;

    if (matrix_alloc(&mat, m, n) != ok) {
        printf("Erreur d'allocation de la matrice.\n");
        return 1;
    }

    if (matrix_init_from_array(&mat, m, n, data, s) != ok) {
        printf("Erreur d'initialisation de la matrice à partir du tableau.\n");
        return 1;
    }

    printf("Matrice initiale :\n");
    matrix_print(mat);

    matrix_t cloned;
    if (matrix_clone(&cloned, mat) != ok) {
        printf("Erreur de clonage de la matrice.\n");
        return 1;
    }

    printf("Matrice clonee :\n");
    matrix_print(cloned);

    matrix_t transposed;
    if (matrix_transpose(&transposed, mat) != ok) {
        printf("Erreur de transposition de la matrice.\n");
        return 1;
    }

    printf("Matrice transposee :\n");
    matrix_print(transposed);

    if (matrix_is_equal(mat, cloned)) {
        printf("La matrice et son clone sont egaux.\n");
    } else {
      printf("La matrice et son clone ne sont pas egaux.\n");
    }

    int32_t elem;
    if (matrix_get(&elem, mat, 0, 0) != ok) {
        printf("Erreur de recuperation de l'element.\n");
        return 1;
    }
    printf("L'element a l'index [0][0] est : %d\n", elem);

    if (matrix_set(mat, 0, 0, 10) != ok) {
        printf("Erreur de modification de l'element.\n");
        return 1;
    }
    printf("Matrice apres modification de l'element [0][0] :\n");
    matrix_print(mat);

    matrix_destroy(&mat);
    matrix_destroy(&cloned);
    matrix_destroy(&transposed);

    return 0;
}