#include <stdio.h>
#include <stdlib.h>
//difficulté : comment séparer les chiffres -> solution était de calculer le mod de 10 du nombre et puis de le diviser par dix

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: 6 numbers\n");
        return 1;
    }
    const int SIZE = 5;
    int number_tab[SIZE];
    int numbers = atoi(argv[1]);
   
    while( numbers >= 10){
        int temp = numbers;
        int num_digits;
        while (temp != 0){
            temp /= 10;
            num_digits++;
        }

        int digits[num_digits];
        temp=numbers;
        
        for (int  i = num_digits-1; i >= 0; i--)
        {
            digits[i] = temp % 10;
            temp /= 10;
        }
        
        int res = 0;
        for (int i = 0; i < num_digits; i++)
        {
            res += digits[i];
        }
        numbers = res;
        
    }

    printf("la somme des chiffres vaut : %d",numbers);
    return 0;
}