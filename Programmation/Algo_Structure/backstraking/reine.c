#include "stdbool.h";

// Calcule le nombre de solutions au problème des <n> reines
void nb_sol(int n, bool board[n][n], int co, int *ptr_cpt)
{
    for (int li = 0; li < n; li++)
    {
        if (board[li][co])
        {
            if (co < n - 1)
            {
                bool new_board[n][n]; // alloué à chaque nouvelle tentative
                copy(n, board, new_board);
                prises_devant(n, new_board, li, co);
                nb_sol(n, new_board, co + 1, ptr_cpt);
            }
            else
            {
                *ptr_cpt = (*ptr_cpt) + 1;
            }
        }
    }
}

// Copier un tableau dans un autre
void copy(board_in, board_out){
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; i++)
        {
            board_in[i][j] = board_out[i][j];
        }
        
    }
    
}
// Placer une reine et mettre à jour
void placer_devant(int n, bool board[n][n], int li, int co)
{
    // board est occupé à ligne/colonne
    // toutes les cases des colonnes
    // suivantes sont mises à jour
    board[li][co] = false; // position de la reine
    for (int j = 1; j < n - co; j++)
    {
        // horizontale et diagonales à droite de la reine
        if (j <= li)
        {
            board[li - j][co + j] = false;
        }
        board[li][co + j] = false;
        if (li + j < n)
        {
            board[li + j][co + j] = false;
        }
    }
}

int main()
{
    bool board[8][8];
}