#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "image.h"
#include "matrix.h"
pgm_result pgm_read_from_file(pgm *p, char *filename){
    FILE *fp = fopen(filename,"rb");
    if(fp == NULL){
        fprintf(stderr , "Can't open output file %s!\n",
        filename); // affiche dans le canal d'erreur
        return failure;
    }
    matrix_init_from_array(p->pixels)

    fclose(fp);
    return success;
}

pgm_result pgm_write_to_file(pgm *p, char *filename){
    return success;
}

int main(){
    FILE *fp;

    return 0;
}