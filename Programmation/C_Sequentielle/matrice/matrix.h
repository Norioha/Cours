#include <stdint.h>


typedef struct matrix {
    int32_t rows;
    int32_t cols;
    int32_t **data;
} matrix_t;


typedef enum _error_code{
    ok,err
} error_code;