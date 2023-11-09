#include <stdio.h>
//boolean datatype
#include <stdbool.h>

void main(){
    int nb = 0;
    printf("Entrer une année pour savoir si elle est bissextile \n");
    bool isBissextile = false;

    scanf("%d",&nb);
    if(nb % 4 == 0){
        isBissextile = true;
    }

    if(nb % 100 == 0 || nb * 400 == 0){
        isBissextile = true;
    }
    /**
    if (nb % 400 == 0)
    {
        isBissextile = false;
    }
    **/
    if(isBissextile){
        printf("L'année %d est bissextile \n",nb);
    }
    else {
        printf("L'année %d n'est pas bissextile \n",nb);

    }

}