#include "mystring.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int string_cat(size_t dest_size, char *dest, char *src)
{
    if (dest_size == 0)
    {
        return 0;
    }

    for (size_t i = 0; i < dest_size + string_len(src); i++)
    {
        dest[dest_size + i] = src[i];
    }
    dest[dest_size + dest_size + string_len(src)] = '\0';
    return 1;
}

char *string_chr(char *s, char c)
{
    if (s == NULL)
    {
        return NULL;
    }

    while (*s != '\0')
    {
        if (*s == c)
        {
            return s; // Retourne un pointeur vers le caractère trouvé.
        }
        s++;
    }

    return NULL; // Le caractère n'a pas été trouvé dans la chaîne.
}

size_t string_len(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i += 1;
    }
    return i;
}

bool string_cmp(char *s1, char *s2)
{
    int str_len = string_len(s1);
    for (int i = 0; i < str_len; i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}
// dest = src
int string_cpy(size_t dest_size, char *dest, char *src)
{
    if (dest_size == 0)
    {
        return 0;
    }

    for (size_t i = 0; i < dest_size; i++)
    {
        dest[i] = src[i];
    }
    dest[string_len(src)] = '\0';
    return 1;
}

// pas trop sur de la différence
int string_ncpy(char *dest, char *src, size_t n)
{
    if (dest == NULL || src == NULL)
    {
        return 1; // Les pointeurs ne doivent pas être nuls.
    }
    size_t src_len = string_len(src);

    if (src_len == n && src[src_len] != '\0')
    {
        return 1; // La chaîne src est plus longue que n.
    }

    for (size_t i = 0; i < src_len; i++)
    {
        dest[i] = src[i];
    }
    dest[src_len] = '\0'; // Assurez-vous que la chaîne de destination est bien terminée.

    return 0; // La copie s'est déroulée avec succès.
}
/**
int string_ncat(size_t dest_size, char *dest, char *src, size_t n)
{
}

bool string_ncmp(char *s1, char *s2, size_t n)
{
    return false;
}


*/
size_t string_cnt_chr(char *s, char c)
{
    size_t counter = 0;
    for (size_t i = 0; i < string_len(s); i++)
    {
        if (s[i] == c)
        {
            counter += 1;
        }
    }
    return counter;
}

void string_fry(char *s)
{
    int length = string_len(s);
    if (length <= 1)
    {
        return; // Rien à mélanger pour les chaînes de longueur 0 ou 1.
    }

    srand(time(NULL)); // Initialise le générateur de nombres aléatoires avec une graine basée sur l'heure actuelle.

    for (int i = length - 1; i > 0; i--)
    {
        // Génère un index aléatoire dans la plage [0, i].
        int j = rand() % (i + 1);

        // Échange les caractères aux indices i et j.
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

void PrintString(char *string)
{
    int str_len = string_len(string);
    for (size_t i = 0; i < str_len; i++)
    {
        printf("%c", string[i]);
    }
}

int main()
{
    char s1[100] = {'t', 'a', 'd', 'z', 'd', 's', 'j', '\0'};
    char s2[100] = {'c', 'a', 't', '\0'};
    /**
    //STRING LEN
    size_t test = string_len(s);
    printf("%lu \n", test);
    //COMPARE STRING
    bool x = string_cmp(s1, s2);
    printf("%d\n", x);
    */
    // String Concat

    /**
    string_cat(string_len(s1), s1, s2);
    PrintString(s1);
    **/

    // String SEARCH

    /**
    char *result = string_chr(s1, 'b');
    if (result != NULL)
    {
        printf("%c\n", *result); // Affiche le caractère 't'.
    }
    else
    {
        printf("Le caractère n'a pas été trouvé.\n");
    }

    */
    // STRING COPY

    /***
    string_cpy(string_len(s2),s1,s2);
    PrintString(s1);
    */
    // STRING COPY BY N
    /**    int result = string_ncpy(s2, s1, 50);

    if (result == 0)
    {
        printf("Copie réussie : %s\n", s2);
    }
    else
    {
        printf("Erreur : la chaîne de destination est trop petite.\n");
    }
    printf("\n");
    */
    // COUNT CHAR
    //printf("%li \n", string_cnt_chr(s1, 'a'));


    string_fry(s1);
    PrintString(s1);

    return 0;
}