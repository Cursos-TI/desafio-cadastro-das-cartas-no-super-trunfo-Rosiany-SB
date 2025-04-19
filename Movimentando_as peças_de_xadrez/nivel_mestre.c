#include <stdio.h>

// Função recursiva para movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimento do Bispo com loops aninhados
void moverBispoAninhado(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // --- MOVIMENTO DA TORRE (recursivo) ---
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);

    // --- MOVIMENTO DO BISPO (recursivo) ---
    printf("\nMovimento do Bispo (5 casas na diagonal cima-direita):\n");
    moverBispo(5);

    // --- MOVIMENTO DO BISPO (com loops aninhados) ---
    printf("\nMovimento do Bispo com loops aninhados (5 casas):\n");
    moverBispoAninhado(5);

    // --- MOVIMENTO DA RAINHA (recursivo) ---
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);

    // --- MOVIMENTO DO CAVALO (loops complexos) ---
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    int cima, direita;
    
    for (cima = 0; cima < 2; cima++) {
        if (cima > 2) break;  // Condição de segurança
        printf("Cima\n");
        
        // Apenas na última iteração do movimento vertical
        if (cima == 1) {
            for (direita = 0; direita < 1; direita++) {
                printf("Direita\n");
            }
        }
    }

    return 0;
}