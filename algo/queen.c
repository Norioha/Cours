#include <stdio.h>
#include <stdlib.h>

#define WIDTH 8
#define HEIGHT 8
#define PATH_CHAR '*'
#define PLAYER_CHAR 'R'

int get_int(char *prompt) {
    int n;
    while (1) {
        printf("%s", prompt);
        if (scanf("%d", &n) != 1) {
            getchar(); // https://stackoverflow.com/a/19259656
            printf("Veuillez entrer un nombre valid.\n");
            continue;
        }

        return n;
    }
}

void drawboard(int x, int y) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            int dx = x - j; 
            int dy = y - i;
            int is_diag = dx == 0 || dy == 0 || abs(dx) == abs(dy);
            if (x == j && i == y) printf(" %c", PLAYER_CHAR);
            else if (x == j || i == y || is_diag) printf(" %c", PATH_CHAR);
            else printf("  ");
        }
        printf("\n");
    }
}

void main() {
    int x = get_int("X: ");
    int y = get_int("Y: ");

    // drawboard(3, 2);
    drawboard(x, y);
}
