#include <stdio.h>

/*
    Tema 4 - Movimento de Peças de Xadrez (Nível Avançado)

    - Torre, Bispo e Rainha: movimentação com recursividade
    - Cavalo: movimentação em "L" com loops aninhados (2 para cima, 1 para direita)
    - Bispo: também implementado com recursividade + loops aninhados
*/

// ------------------ Funções Recursivas ------------------

// Torre: move apenas para cima (exemplo)
void moverTorre(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Cima\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Bispo: movimento diagonal (ex: cima + direita)
// Recursividade
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Rainha: combina torre + bispo (exemplo, para simplificar: move como torre)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    moverRainha(casas - 1);
}

// ------------------ Loops Complexos ------------------

// Cavalo: movimento em L -> 2 para cima + 1 para direita
void moverCavalo() {
    int passosVertical = 2;
    int passosHorizontal = 1;

    // Loop externo para o movimento vertical
    for (int i = 0; i < passosVertical; i++) {
        if (i == 1) {
            // Apenas para exemplo, mostrar uso de continue
            continue;
        }
        printf("Cima\n");
    }

    // Loop interno para o movimento horizontal
    for (int j = 0; j < passosHorizontal; j++) {
        if (j > 1) break; // Exemplo de controle extra
        printf("Direita\n");
    }

    printf("\n"); // separação
}

// ------------------ Loops Aninhados no Bispo ------------------

// Bispo com loops aninhados (vertical + horizontal)
void moverBispoLoop(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Cima\n"); // Loop externo = vertical
        for (int j = 0; j < 1; j++) {
            printf("Direita\n"); // Loop interno = horizontal
        }
    }
    printf("\n");
}

// ------------------ Função Principal ------------------
int main() {
    int casasTorre = 3;
    int casasBispo = 2;
    int casasRainha = 4;

    // Torre com recursão
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo com recursão
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // Rainha com recursão
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo com loops aninhados
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    // Bispo com loops aninhados
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoLoop(casasBispo);

    return 0;
}

