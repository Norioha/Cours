#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "image.h"

pgm_result pgm_read_from_file(pgm *p, char *filename){
    FILE *fp = fopen(filename,"rb");
    if(fp == NULL){
        fprintf(stderr , "Can't open output file %s!\n",
        filename); // affiche dans le canal d'erreur
        return failure;
    }
    char numberMagic[100];
    char cols[100];
    char rows[100];
    char max[100];


    fgets(numberMagic,10,fp);
    fgets(cols,5,fp);
    fgets(rows,5,fp);
    fgets(max,5,fp);
    /**
     * 
     * Affichage des donnes
    printf("test cols : ");
    printf("\"%s\"", cols);

    printf("test2 rows : ");
    printf("\"%s\"", rows);

    printf("test3 max : ");
    printf("\"%s\"", max);
    */

   //strtol convert char to int32_t (char,pointer,base of the number)
   
    int32_t nbCols = (int32_t)strtol(cols,NULL,10);
    int32_t nbRows = (int32_t)strtol(rows,NULL,10);
  
    if(matrix_init(&p->pixels,nbRows,nbCols,0) != ok){
        printf(" bug ");
        return failure;
    }
    printf("after Matrix INIT");
    char bufferData[10];
    for (int32_t currentRow = 0; currentRow < nbRows; currentRow++)
    {
        for (int32_t currentCol = 0; currentCol < nbCols; currentCol++)
        {
            fgets(bufferData,5,fp);
            printf(" %s ", bufferData);
            printf("\n");
            int32_t elem = (int32_t)strtol(bufferData,NULL,10);
            matrix_set(p->pixels,currentCol,currentCol,elem);
        }
        
    }

    
    fclose(fp);
    return success;
}


pgm_result pgm_write_to_file(pgm *p, char *filename){
    return success;
}

