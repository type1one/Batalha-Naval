#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Tamanho fixo do tabuleiro
#define TAMANHO 10

int main() {
    // Declaração da matriz do tabuleiro e inicialização com 0 
    int tabuleiro[TAMANHO][TAMANHO];

    // Variáveis para os loopings
    int i, j;

    // Inicializando todas as posições do tabuleiro com 0
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionamento dos navios

    // Navio 1 - horizontal 
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;

    // Navio 2 - vertical 
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;
    tabuleiro[7][5] = 3;

    // Navio 3 - diagonal principal 
    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;

    // Navio 4 - diagonal secundária 
    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;

    // Exibição do tabuleiro
    printf("Tabuleiro Batalha Naval (0 = água, 3 = navio):\n\n");

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
