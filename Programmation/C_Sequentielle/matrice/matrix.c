#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"
#include <stdbool.h>


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
//
error_code_t matrix_destroy(matrix_t *mat){
    for (int i = 0; i < mat->rows; i++)
    {
        free(mat->data[i]);
    }
    
    mat->rows = -1;
    mat->cols = -1;
    mat->data = NULL;
    free(mat);

    return ok;
}


error_code_t matrix_init_from_array(matrix_t *mat, int32_t m, int32_t n, int32_t data[], int32_t s){
    // Vérifie si les entrées sont valides
    if(mat == NULL || data == NULL || m <= 0 || n <= 0 || s < m * n){
        return err;
    }
    // Initialise les champs rows et cols de la structure mat
    mat->rows = m;
    mat->cols = n;
    // Alloue de la mémoire pour le champ data de la structure mat
    mat->data = malloc(m * sizeof(int32_t *));
    if(mat->data == NULL){
        return err;
    }
    // Initialise les éléments de la matrice
    for(int i = 0; i < m; i++){
        mat->data[i] = malloc(n * sizeof(int32_t));
        if(mat->data[i] == NULL){
            for(int j = 0; j < i; j++){
                free(mat->data[j]);
            }
            free(mat->data);
            return err;
        }
        for(int j = 0; j < n; j++){
            mat->data[i][j] = data[i * n + j];
        }
    }
    return ok;
}

//création du clone d’une matrice, la nouvelle matrice est une copie 
//de la matrice d’origine (il faut réallouer la mémoire)
error_code_t matrix_clone(matrix_t *cloned, matrix_t mat){
    // Vérifie si l'entrée est valide
    if(cloned == NULL){
        return err;
    }
    // Initialise les champs rows et cols de la structure cloned
    cloned->rows = mat.rows;
    cloned->cols = mat.cols;
    // Alloue de la mémoire pour le champ data de la structure cloned
    cloned->data = malloc(mat.rows * sizeof(int32_t *));
    if(cloned->data == NULL){
        return err;
    }
    // Initialise les éléments de la matrice
    for(int i = 0; i < mat.rows; i++){
        cloned->data[i] = malloc(mat.cols * sizeof(int32_t));
        if(cloned->data[i] == NULL){
            for(int j = 0; j < i; j++){
                free(cloned->data[j]);
            }
            free(cloned->data);
            return err;
        }
        for(int j = 0; j < mat.cols; j++){
            cloned->data[i][j] = mat.data[i][j];
        }
    }
    return ok;
}


error_code_t matrix_transpose(matrix_t *transposed, matrix_t mat){
    // Vérifie si l'entrée est valide
    if(transposed == NULL){
        return err;
    }
    // Initialise les champs rows et cols de la structure transposed
    transposed->rows = mat.cols;
    transposed->cols = mat.rows;
    // Alloue de la mémoire pour le champ data de la structure transposed
    transposed->data = malloc(transposed->rows * sizeof(int32_t *));
    if(transposed->data == NULL){
        return err;
    }
    // Initialise les éléments de la matrice
    for(int i = 0; i < transposed->rows; i++){
        transposed->data[i] = malloc(transposed->cols * sizeof(int32_t));
        if(transposed->data[i] == NULL){
            for(int j = 0; j < i; j++){
                free(transposed->data[j]);
            }
            free(transposed->data);
            return err;
        }
        for(int j = 0; j < transposed->cols; j++){
            transposed->data[i][j] = mat.data[j][i];
        }
    }
    return ok;
}
error_code_t matrix_print(matrix_t mat){
    // Affiche les éléments de la matrice
    for(int i = 0; i < mat.rows; i++){
        for(int j = 0; j < mat.cols; j++){
            printf("%d ", mat.data[i][j]);
        }
        printf("\n");
    }
    return ok;
}

bool matrix_is_equal(matrix_t mat1, matrix_t mat2){
    // Vérifie si les dimensions des deux matrices sont égales
    if(mat1.rows != mat2.rows || mat1.cols != mat2.cols){
        return false;
    }
    // Vérifie si les éléments des deux matrices sont égaux
    for(int i = 0; i < mat1.rows; i++){
        for(int j = 0; j < mat1.cols; j++){
            if(mat1.data[i][j] != mat2.data[i][j]){
                return false;
            }
        }
    }
    return ok;
}

//récupération de l’élément [ix][iy] de la matrice de façon sûre (vérification des dépassements de capacité par exemple) et copie dans elem
error_code_t matrix_get(int32_t *elem, matrix_t mat, int32_t ix, int32_t iy){
    // Vérifie si l'entrée est valide
    if(elem == NULL || ix < 0 || ix >= mat.rows || iy < 0 || iy >= mat.cols){
        return err;
    }
    // Copie l'élément dans elem
    *elem = mat.data[ix][iy];
    return ok;
}



//modification d’un élément [ix][iy] de la matrice de façon sûre (vérification des dépassements de capacité par exemple)
error_code_t matrix_set(matrix_t mat, int32_t ix, int32_t iy, int32_t elem){
    // Vérifie si l'entrée est valide
    if(ix < 0 || ix >= mat.rows || iy < 0 || iy >= mat.cols){
        return err;
    }
    // Modifie l'élément
    mat.data[ix][iy] = elem;
    return ok;
}
