#include <stdio.h>

int main() {
    // --- MOVIMENTO DA TORRE (5 casas para a DIREITA) ---
    // Usando estrutura 'for' para controle preciso do número de repetições
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // --- MOVIMENTO DO BISPO (5 casas na DIAGONAL CIMA-DIREITA) ---
    // Usando estrutura 'while' para demonstrar movimento contínuo até a condição ser satisfeita
    printf("\nMovimento do Bispo (5 casas na diagonal cima-direita):\n");
    int casasBispo = 0;
    while (casasBispo < 5) {
        printf("Cima, Direita\n");
        casasBispo++;
    }

    // --- MOVIMENTO DA RAINHA (8 casas para a ESQUERDA) ---
    // Usando estrutura 'do-while' para garantir que o movimento ocorra pelo menos uma vez
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < 8);

    return 0;
}