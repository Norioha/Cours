#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"



/// @brief alloue l'espace dynamiquement
/// @param mat 
/// @param m 
/// @param n 
/// @return ok or err
error_code_t matrix_alloc(matrix_t *mat, int32_t m, int32_t n){
    mat->rows = m;
    mat->cols = n;


    // rappelle malloc retourne un pointeur vers le début de l'espace allouée 
    //sizeof(int32_t*) donne la taille en octets d’un pointeur vers int32_t. C’est la taille de chaque élément du tableau.
    //(int32_t**) est une conversion de type (ou un cast) qui dit au compilateur de traiter 
    //le pointeur renvoyé par malloc comme un pointeur vers un pointeur de int32_t.
    mat->data = (int32_t**)malloc(m * sizeof(int32_t*));

    for (int32_t i = 0; i < m; i++)
    {
        mat->data[i] = (int32_t*) malloc(n * sizeof(int32_t));
    }
    
    return ok;
}

/// @brief initilise dans toutes les cases de la matrice a val 
/// @param mat 
/// @param m 
/// @param n 
/// @param val 
/// @return ok or err
error_code_t matrix_init(matrix_t *mat, int32_t m, int32_t n, int32_t val){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat->data[i][j] = val;
        }
        
    }
    return ok;
}

/// @brief print la matrice
/// @param mat 
/// @param m 
/// @param n 
void print_matrix(matrix_t *mat, int32_t m,int32_t n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ",mat->data[i][j]);
        }
        printf("\n");
    }
    
}

error_code_t matrix_destroy(matrix_t *mat){
    mat->rows = -1;
    mat->cols = -1;
    mat->data = NULL;
    free(mat);

    return ok;
}