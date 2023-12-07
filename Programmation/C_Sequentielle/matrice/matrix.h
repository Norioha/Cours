#include <stdint.h>


typedef struct matrix {
    int32_t rows;
    int32_t cols;
    int32_t **data;
} matrix_t;


typedef enum _error_code{
    ok,err
} error_code_t;

error_code_t matrix_alloc(matrix_t *mat, int32_t m, int32_t n);

error_code_t matrix_init(matrix_t *mat, int32_t m, int32_t n, int32_t val);

error_code_t matrix_destroy(matrix_t *mat);

void print_matrix(matrix_t *mat, int32_t m,int32_t n);