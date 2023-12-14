#include <stdint.h>
#include <stdbool.h>

typedef struct matrix {
    int32_t rows;
    int32_t cols;
    int32_t **data;// is a pointer to a pointer of type 
} matrix_t;


typedef enum _error_code{
    ok,err
} error_code_t;

error_code_t matrix_alloc(matrix_t *mat, int32_t m, int32_t n);

error_code_t matrix_init(matrix_t *mat, int32_t m, int32_t n, int32_t val);

error_code_t matrix_destroy(matrix_t *mat);

void print_matrix(matrix_t *mat, int32_t m,int32_t n);
//allocation d’une matrice, et initialisation de ses valeurs à partir
// d’un tableau de taille s = m*n
error_code_t matrix_init_from_array(matrix_t *mat, int32_t m, int32_t n, int32_t data[], int32_t s);

//création du clone d’une matrice, la nouvelle matrice est une copie 
//de la matrice d’origine (il faut réallouer la mémoire)
error_code_t matrix_clone(matrix_t *cloned, matrix_t mat);

//création de la matrice transposée d’une matrice, la nouvelle matrice est une copie de la matrice originale ou les lignes et les colonnes sont échangées
error_code_t matrix_transpose(matrix_t *transposed, matrix_t mat);

//affichage d’une matrice (très utile pour le débogage)
error_code_t matrix_print(matrix_t mat);


//test de l’égalité de deux matrices
bool matrix_is_equal(matrix_t mat1, matrix_t mat2);


//récupération de l’élément [ix][iy] de la matrice de façon sûre (vérification des dépassements de capacité par exemple) et copie dans elem
error_code_t matrix_get(int32_t *elem, matrix_t mat,int32_t ix, int32_t iy);



//modification d’un élément [ix][iy] de la matrice de façon sûre (vérification des dépassements de capacité par exemple)
error_code_t matrix_set(matrix_t mat, int32_t ix, int32_t iy,int32_t elem);

