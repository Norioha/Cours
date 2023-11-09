#include <stdlib.h>
#include <stdbool.h>

int string_cat(size_t dest_size, char *dest, char *src);

char *string_chr(char *s, char c);

bool string_cmp(char *s1, char *s2);

int string_cpy(size_t dest_size, char *dest, char *src);

size_t string_len(char *s);

int string_ncpy(char *dest, char *src, size_t n);
/**
int string_ncat(size_t dest_size, char *dest, char *src, size_t n);

bool string_ncmp(char *s1, char *s2, size_t n);


*/
size_t string_cnt_chr(char *s, char c);

void string_fry(char *s);