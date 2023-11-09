#include <stdio.h>      /* printf(), scanf() */
#include <stdlib.h>     /* srand(), rand() */
#include <time.h>       /* time() */
#include <math.h>       /* log() */
#include <stdbool.h> 

void main(){
    int nb_guess = 1;
  int max = 1000;
  printf("Entrer la valeux max: ");
  bool userRules = false;
  do
  {
    if(userRules){
   printf("Vous devez entrer un nombre plus grand ou égal à zéro.\n");
    }
   scanf("%d",&max);
   userRules = true;
  } while (max <= 0);
  
  
  
  srand(time(0));
  int secret = rand() % max + 1 ;

 //printf("secret = %d\n",secret);
 int guess = 0;
 bool a_gagne = false;
 while (!a_gagne)
 {

    printf("Devine le nombre: ");
 scanf("%d",&guess);
  if(secret > guess) {
    printf("Essaie plus grand \n");
  }
  else if (secret < guess)
  {
    printf("Essaie plus petit \n");
    
  }
  else
  {
    printf("Bravo tu as trouvé \n");
    a_gagne = true;
  }    
  nb_guess++;
 }
 printf("Vous avez trouvé en %d coups\n",nb_guess);
}