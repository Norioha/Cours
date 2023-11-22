#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//note: appris aujourd'hui : agrument avec string + conversion en minuscule

char toLower(char c){
    if(c >=  'A' && c <= 'Z'){
        return c + ('a' - 'A');
    }
}
int main(int argc, char **argv) {
if (argc < 3) {
        printf("Usage: program_name <argument1> <argument2>\n");
        return 1;
    }
    char *main_string = argv[1];
    char *sub_string = argv[2];

    // Convert both strings to lowercase
    char *lowercase_main = strdup(main_string);
    char *lowercase_sub = strdup(sub_string);
      
    for (int i = 0; lowercase_main[i]; i++) {
        lowercase_main[i] = toLower(lowercase_main[i]);
    }
    for (int i = 0; lowercase_sub[i]; i++) {
        lowercase_sub[i] = toLower(lowercase_sub[i]);
    }

    int occurence = 0;
    for (int i = 0; i < strlen(lowercase_main) - strlen(lowercase_sub) ; i++)
    {
        if(lowercase_main[i] == lowercase_sub[0]){
            int right_letter = 0;
            for (int j = 0; j < strlen(lowercase_sub); j++)
            {
                if(lowercase_main[i+j] == lowercase_sub[j]){
                    right_letter += 1;
                }
            }
            if(right_letter == strlen(lowercase_sub)){
                occurence += 1;
            }
        }
    }
    printf("\n");
    printf("Occurence : %d \n",occurence);
   

    return 0;
    
}