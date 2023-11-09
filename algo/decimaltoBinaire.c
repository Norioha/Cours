#include <stdio.h>

void decimalToBinary(int num)
{
    if (num == 0)
    {
        printf("Le nombre en binaire est : 0\n");
        return;
    }

    int binary[32]; // Un tableau pour stocker les bits en binaire (ici, on suppose une taille maximale de 32 bits).
    int index = 0;

    if (num < 0)
    {
        printf("Le nombre en binaire est : "); // Gestion des nombres négatifs
        printf("1");                           // Le premier bit est 1
        num = -num;                            // On travaille avec la valeur absolue
    }
    else
    {
        printf("Le nombre en binaire est : ");
        printf("0"); // Le premier bit est 0
    }

    while (num > 0)
    {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }

    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    printf("\n");
}

int main()
{
    int number;
    printf("Entrez un nombre entier : ");
    scanf("%d", &number);

    decimalToBinary(number);

    return 0;
}
