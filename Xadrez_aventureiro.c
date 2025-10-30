#include <stdio.h>

int main() {
    // Movimento da Torre usando estrutura FOR
    printf("Movimento da Torre:\n");
    int casas_torre = 5;

    // 5 casas para a direita usando FOR
    for(int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    
    printf("\n");
    
    // Movimento do Bispo usando estrutura WHILE
    printf("Movimento do Bispo:\n");
    int casas_bispo = 5;
    int contador_bispo = 1;
    
    // 5 casas na diagonal superior direita usando WHILE
    while(contador_bispo <= casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    
    printf("\n");
    
    // Movimento da Rainha usando estrutura DO-WHILE
    printf("Movimento da Rainha:\n");
    int casas_rainha = 8;
    int contador_rainha = 1;
    
    // 8 casas para a esquerda usando DO-WHILE
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while(contador_rainha <= casas_rainha);
    
    printf("\n");
    
     // MOVIMENTO DO CAVALO - usando LOOPS ANINHADOS
    printf("Movimento do Cavalo:\n");
    
    // Usando a lógica do exemplo: while com flag e for aninhado
    int movimentoCompleto = 1; // Flag para controlar o movimento em 'L'
    
    // Loop WHILE externo controla a execução do movimento completo
    while (movimentoCompleto--) {
        // Loop FOR interno para o movimento vertical (2 casas para baixo)
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n"); // Imprime "Baixo" duas vezes
        }
        
        // Movimento horizontal (1 casa para esquerda)
        printf("Esquerda\n"); // Imprime "Esquerda" uma vez
    }
   
        
    return 0;
}