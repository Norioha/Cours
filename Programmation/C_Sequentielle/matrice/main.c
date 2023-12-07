#include "matrix.h"
#include <stdio.h>

int main(){

    matrix_t mat;
    int32_t rows = 3;
    int32_t col = 4; 
    error_code_t err =  matrix_alloc(&mat,rows,col);

    if(err != ok){
        printf("Oups, erreur quelque part");
    }

    err = matrix_init(&mat,rows,col,1);

    if(err != ok){
        printf("Oups, erreur quelque part");
    }
    printf("affichage de la matrice : ");
    printf("\n");
    print_matrix(&mat,rows,col);

    return 0;
}