/// @brief regarde si la valeur en binaire à la pos donné est == 0
/// si oui copie la valeur dans un tableau temporaire
/// @param size 
/// @param tab 
/// @param tab_tmp 
/// @param pos 
void alveole_0(int size, int tab[], int tab_tmp[], int pos)
{
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (bit(tab[i], pos) == 0)
        {
            tab_tmp[k] = tab[i];
            k += 1;
        }
    }
}
/// @brief regarde si la valeur en binaire à la pos donné est == 1
/// si oui copie la valeur dans un tableau temporaire
/// @param size 
/// @param tab 
/// @param tab_tmp 
/// @param pos 
void alveole_1(int size, int tab[], int tab_tmp[], int pos)
{
    int k = size - 1;
    for (int i = size - 1; i >= 0; i--)
    {
        if (bit(tab[i], pos) == 1)
        {
            tab_tmp[k] = tab[i];
            k -= 1;
        }
    }
}
/// @brief 
/// @param val 
/// @param pos 
/// @return retourne si le bit de la valeur(pos) 1 ou 0
int bit(int val, int pos)
{
    int mask = 1 << pos;
    return (val & mask) != 0;
}
/// @brief compte combien de bits est fait sur diff (a - b)
/// @param a 
/// @param b 
/// @return 
int nombre_de_bits(int a, int b)
{
    int count = 0;
    int diff = a - b;
    while (diff > 0)
    {
        diff >>= 1; // décalage vers la droite pour vérifier chaque bit
        count++;
    }
    return count;
}
/// @brief 
/// @param size 
/// @param tab 
/// @return la valeur la plus petite valeur du tableau
int value_min(int size, int tab[])
{
    int min = tab[0];
    for (int i = 0; i < size; i++)
    {
        if (min > tab[i])
        {
            min = tab[i];
        }
    }
    return min;
}
/// @brief 
/// @param size 
/// @param tab 
/// @return retourne la plus grande valeur du tableau
int value_max(int size, int tab[])
{
    int max = tab[0];
    for (int i = 0; i < size; i++)
    {
        if (max < tab[i])
        {
            max = tab[i];
        }
    }
    return max;
}

/// @brief fait en sorte que toutes les valeurs soit positives (décalage de nombre)
/// @param size 
/// @param tab 
/// @param val 
void decaler(int size, int tab[], int val)
{
    for (int i = 0; i < size; i++)
    {
        tab[i] -= val;
    }
}


void radix_sort(int size, int tab[])
{
    // init
    int val_min = value_min(size, tab);
    int val_max = value_max(size, tab);


    //décalage pour que tous les nombres soit positifs
    decaler(size, tab, val_min);
    int nb_bits = nombre_de_bits(val_max, val_min);
    //printf("%d \n",nb_bits);

    // algo
    int tab_tmp[size];
    //boucle qui regarde chaque bit de la valeur 
    for (int pos = 0; pos < nb_bits; pos++)
    {   

        alveole_0(size, tab, tab_tmp, pos);
        alveole_1(size, tab, tab_tmp, pos);
        // copy tab_tmp to tab
        for (int i = 0; i < size; i++)
        {
            tab[i] = tab_tmp[i];
        }
    }


    // post-traitement 
    decaler(size,tab,-val_min);
}
