#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    // Caso base: quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    
    // Caso recursivo: mover uma casa e chamar a função para as restantes
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    // Caso base: quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    
    // Caso recursivo: mover na diagonal e chamar a função para as restantes
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    // Caso base: quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    
    // Caso recursivo: mover uma casa e chamar a função para as restantes
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimento do Bispo com loops aninhados
void moverBispoLoopsAninhados(int casas) {
    printf("Movimento do Bispo com Loops Aninhados:\n");
    
    // Loop externo para controle vertical
    for (int vertical = 1; vertical <= casas; vertical++) {
        // Loop interno para controle horizontal (diagonal)
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita\n");
            
            // Usando break para sair do loop interno após uma execução
            break;
        }
        
        // Usando continue para garantir que todas as iterações sejam completadas
        continue;
    }
}

// Função para movimento complexo do Cavalo
void moverCavaloComplexo() {
    printf("Movimento do Cavalo (Loops Complexos):\n");
    
    int movimentoCompleto = 0;
    int tentativas = 0;
    
    // Loop while externo com condição complexa 
    while (!movimentoCompleto) {
        tentativas++;
        
        // Loop for para movimento vertical (2 casas para cima)
        for (int vertical = 1; vertical <= 2; vertical++) {
            // Verificação condicional dentro do loop
            if (vertical > 2) {
                break; // Sai do loop se exceder o movimento vertical
            }
            
            printf("Cima\n");
            
            // Usando continue para pular para próxima iteração
            continue;
        }
        
        // Loop do-while para movimento horizontal (1 casa para direita)
        int horizontal = 1;
        do {
            if (horizontal > 1) {
                break; // Garante que executa apenas uma vez
            }
            
            printf("Direita\n");
            horizontal++;
            
        } while (horizontal <= 1);
        
        // Marca movimento como completo
        movimentoCompleto = 1;
        
        
        // Break para sair do loop while após movimento bem-sucedido
        break;
    }
    
}

int main() {
    // MOVIMENTO DA TORRE COM RECURSIVIDADE
    printf("Movimento da Torre (Recursivo):\n");
    moverTorre(5);
    
    printf("\n");
    
    // MOVIMENTO DO BISPO COM RECURSIVIDADE
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispo(5);
    
    printf("\n");
    
    // MOVIMENTO DA RAINHA COM RECURSIVIDADE
    printf("Movimento da Rainha (Recursivo):\n");
    moverRainha(8);
    
    printf("\n");
    
    // MOVIMENTO DO BISPO COM LOOPS ANINHADOS
    moverBispoLoopsAninhados(5);
    
    printf("\n");
    
    // MOVIMENTO DO CAVALO COM LOOPS COMPLEXOS
    moverCavaloComplexo();
    
    return 0;
}