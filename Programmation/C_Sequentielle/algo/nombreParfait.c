#include <stdio.h>

int main(){

    int number = 1000;
    for ( int i = 1; i <= number; i++)
    {
        double sum = 0;
        for (int j = 1; j < i; j++)
        {
            if(i % j == 0){
                sum += j;
            }
        }
        if(sum == i){
            printf("%d, est nombre parfaits \n", i);
        }
        
    }

    return 0;
}