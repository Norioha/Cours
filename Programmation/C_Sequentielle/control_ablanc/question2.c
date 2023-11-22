#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
size_t string_len(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i += 1;
    }
    return i;
}

void PrintString(char *string)
{

    
    int str_len = string_len(string);
    for (size_t i = 0; i < str_len; i++)
    {
        printf("%c", string[i]);
    }
}

int main(int argc, char **argv ){

if (argc < 2) {
        printf("Usage: program_name <argument1> \n");
        return 1;
    }
    char *main_string = argv[1];
    printf("%d",string_len(main_string));
    int size = string_len(main_string);
    char even_tab[size];
    int even_index = 0;
    char odd_tab[size];
    int odd_index = 0;


    for (int i = 0; i < size; i++)
    {
        if(i % 2 == 0){
            even_tab[even_index] = main_string[i];
            even_index += 1;
        }
        else{
           odd_tab[odd_index] = main_string[i];
           odd_index += 1;
        }
    }
    even_tab[even_index] = '\0';
    odd_tab[odd_index] = '\0';

    printf("chaine de sortie :");
    PrintString(even_tab);
    printf(" ");
    PrintString(odd_tab);

   

    return 0;
}