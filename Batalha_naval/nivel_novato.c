#include <stdio.h>

/*
 * DEFINIÇÕES GLOBAIS
 * Tamanho fixo do tabuleiro e navios conforme enunciado
 */
#define TAM_TABULEIRO 10    // Tabuleiro 10x10
#define TAM_NAVIO 3         // Cada navio ocupa 3 posições
#define AGUA '0'            // Água
#define NAVIO '3'           // Navio

/*
 * Inicializa o tabuleiro com água
 */
void inicializarTabuleiro(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
            tabuleiro[linha][coluna] = AGUA;
        }
    }
}

/*
 * Tenta posicionar navio horizontal
 * Retorna 1 se sucesso, 0 se falhou
 */
int posicionarNavioHorizontal(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], 
                             int linha, int coluna) {
    // Verifica limites
    if (coluna + TAM_NAVIO > TAM_TABULEIRO) return 0;
    
    // Verifica sobreposição
    for (int c = coluna; c < coluna + TAM_NAVIO; c++) {
        if (tabuleiro[linha][c] == NAVIO) return 0;
    }
    
    // Posiciona
    for (int c = coluna; c < coluna + TAM_NAVIO; c++) {
        tabuleiro[linha][c] = NAVIO;
    }
    return 1;
}

/*
 * Tenta posicionar navio vertical
 * Retorna 1 se sucesso, 0 se falhou
 */
int posicionarNavioVertical(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO],
                           int linha, int coluna) {
    // Verifica limites
    if (linha + TAM_NAVIO > TAM_TABULEIRO) return 0;
    
    // Verifica sobreposição
    for (int l = linha; l < linha + TAM_NAVIO; l++) {
        if (tabuleiro[l][coluna] == NAVIO) return 0;
    }
    
    // Posiciona
    for (int l = linha; l < linha + TAM_NAVIO; l++) {
        tabuleiro[l][coluna] = NAVIO;
    }
    return 1;
}

/*
 * Exibe o tabuleiro formatado
 */
void exibirTabuleiro(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    printf("\n  ");
    for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
        printf("%2d ", coluna);
    }
    
    for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
        printf("\n%2d", linha);
        for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
            printf(" %c ", tabuleiro[linha][coluna]);
        }
    }
    printf("\n");
}

int main() {
    char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];
    inicializarTabuleiro(tabuleiro);
    
    // Posiciona navios (coordenadas fixas conforme enunciado)
    if (!posicionarNavioHorizontal(tabuleiro, 2, 3)) {
        printf("Erro ao posicionar navio horizontal!\n");
        return 1;
    }
    
    if (!posicionarNavioVertical(tabuleiro, 5, 7)) {
        printf("Erro ao posicionar navio vertical!\n");
        return 1;
    }
    
    exibirTabuleiro(tabuleiro);
    return 0;
}