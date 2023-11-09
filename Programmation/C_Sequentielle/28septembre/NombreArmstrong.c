#include <stdio.h>
// boolean datatype
#include <stdbool.h>

void main()
{
    int inputNum, somme = 0, tempNum,power;
    printf("Entrer un nombre pour savoir si c'est un nombre d'armstrong \n");
    scanf("%d", &inputNum);

    tempNum = inputNum;
    while (inputNum > 0)
    {
        power = inputNum % 10;
        somme +=  (power * power * power);
        inputNum /= 10;
    }

    if (somme == tempNum)
    {
        printf("Le nombre est armstrong \n");
    }
    else {
        printf("Le nombre n'est pas armstrong \n");
    }
    printf("%d,%d",somme,tempNum);
    
}