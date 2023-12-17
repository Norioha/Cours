#include "matrix.h"


typedef enum _pgm_result {
    success,failure
} pgm_result;


typedef struct _pgm{
    int32_t max;
    matrix_t pixels;
} pgm ; 

//lisant le fichier filename et écrivant son contenu dans la variable p. 
//Cette fonction retourne un pgm_result.
pgm_result pgm_read_from_file(pgm *p, char *filename);

//écrivant le contenu de l’image p dans le le fichier filename. 
//Cette fonction retourne un pgm_result.
pgm_result pgm_write_to_file(pgm *p, char *filename);

/**
 * NOTE . ou ->
 *  
On utilise . quand on accède à la structure directement. 
Par exemple, si on a une structure s de type struct, on peut accéder à un membre m avec s.m.
On utilise -> quand on accède à la structure via un pointeur.


Donc, si on a un pointeur p vers une structure de type struct, 
on peut accéder à un membre m avec p->m. C’est équivalent à (*p).m.
*/

//Quant à fscanf, c’est une fonction de la bibliothèque standard de C qui lit des données formatées à partir d’un flux. Elle est souvent utilisée pour lire des données à partir d’un fichier. La fonction fscanf lit les données en fonction du format spécifié dans la chaîne de format.
//Par exemple, dans le code que j’ai fourni précédemment, fscanf(file, "%s", format); lit une chaîne de caractères à partir du fichier et la stocke dans la variable format. De même, fscanf(file, "%d %d", &(image->pixels.cols), &(image->pixels.rows)); lit deux entiers à partir du fichier 
//et les stocke dans image->pixels.cols et image->pixels.rows respectivement.

