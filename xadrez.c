#include <stdio.h>

#define TABULEIRO 8  // Tamanho do tabuleiro 8x8

// Função auxiliar para imprimir o tabuleiro com uma peça
void imprimirTabuleiro(int x, int y) {
    for (int i = 0; i < TABULEIRO; i++) {
        for (int j = 0; j < TABULEIRO; j++) {
            if (i == x && j == y)
                printf(" P "); // P = posição da peça
            else
                printf(" . ");
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // Exemplo: posição inicial (linha, coluna)
    int linha = 3, coluna = 3;

    printf("Movimentação do Bispo (diagonal):\n");
    // Bispo pode andar em diagonais → 4 direções
    for (int i = 1; i < TABULEIRO; i++) {
        if (linha + i < TABULEIRO && coluna + i < TABULEIRO) 
            imprimirTabuleiro(linha + i, coluna + i); // diagonal inferior direita

        if (linha - i >= 0 && coluna - i >= 0) 
            imprimirTabuleiro(linha - i, coluna - i); // diagonal superior esquerda

        if (linha + i < TABULEIRO && coluna - i >= 0) 
            imprimirTabuleiro(linha + i, coluna - i); // diagonal inferior esquerda

        if (linha - i >= 0 && coluna + i < TABULEIRO) 
            imprimirTabuleiro(linha - i, coluna + i); // diagonal superior direita
    }

    printf("Movimentação da Torre (para direita):\n");
    for (int j = coluna + 1; j < TABULEIRO; j++) {
        imprimirTabuleiro(linha, j);
    }

    printf("Movimentação da Rainha (para esquerda):\n");
    for (int j = coluna - 1; j >= 0; j--) {
        imprimirTabuleiro(linha, j);
    }

    return 0;
}
