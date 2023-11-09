#include <stdio.h>      /* printf(), scanf() */
#include <stdlib.h>     /* srand(), rand() */
#include <time.h>       /* time() */
#include <math.h>       /* log() */
#include <stdbool.h> 


void main(){
    int nb_guess = 1;
    int max = 100;
    int min = 1;
    int guess = 0;
    bool a_gagne = false;
    int secret = 0;
    char IsBigger; 
  
 
 while (!a_gagne)
 {
    if(min == max){
        printf("Il y a eu un problème quelque part... Triche ? ou erreur? \n");
        break;
    }
    guess = (max+min) / 2;
    printf("Votre nombre est t-il %d ?\n",guess);
    scanf("%s",&IsBigger);
    if(IsBigger == 60){
        max = guess;
        nb_guess++;
    }
    else if(IsBigger == 62) {
        min = guess;
        nb_guess++;
    }
    else if(IsBigger == 61){
        a_gagne = true;
        printf("L'ordi a trouvé en %d coups\n",nb_guess);
    }  
    
 }

}