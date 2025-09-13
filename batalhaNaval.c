#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios

    int tabuleiro[5][5] = {0}; // Tabuleiro 5x5

    const int TAMANHO_NAVIO = 3;

    // Coordenadas fixas dos navios
    int linha_navio_h = 1, coluna_navio_h = 2; // horizontal
    int linha_navio_v = 0, coluna_navio_v = 4; // vertical

    // Marca os navios na matriz
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio_h][coluna_navio_h + i] = 1; // horizontal
        tabuleiro[linha_navio_v + i][coluna_navio_v] = 1; // vertical
    }

    // Exibe as coordenadas do navio horizontal
    printf("--- COORDENADAS DO NAVIO HORIZONTAL ---\n");
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("(%d, %d)\n", linha_navio_h, coluna_navio_h + i);
    }
    printf("\n");

    // Exibe as coordenadas do navio vertical
    printf("--- COORDENADAS DO NAVIO VERTICAL ---\n");
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("(%d, %d)\n", linha_navio_v + i, coluna_navio_v);
    }
    printf("\n");

    return 0;
}
