#include <stdio.h>

int main() {
    // --- MOVIMENTO DA TORRE (5 casas para a DIREITA) ---
    // Usando estrutura 'for' para controle preciso do número de repetições
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); //
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

    // --- MOVIMENTO DO CAVALO (2 casas para BAIXO e 1 para ESQUERDA, formando um "L") ---
    // Usando loops aninhados (for + while) para simular o movimento em "L"
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");
    int casasBaixo = 0;
    int casasEsquerda = 0;

    // Loop 'for' para as 2 casas para baixo
    for (casasBaixo = 0; casasBaixo < 2; casasBaixo++) {
        printf("Baixo\n");
    }

    // Loop 'while' para a 1 casa para a esquerda
    while (casasEsquerda < 1) {
        printf("Esquerda\n");
        casasEsquerda++;
    }

    return 0;
}