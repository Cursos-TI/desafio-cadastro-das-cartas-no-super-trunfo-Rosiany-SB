#include <stdio.h>

/*
 * DEFINIÇÕES GLOBAIS
 */
#define TAM_TABULEIRO 10    // Tabuleiro 10x10
#define TAM_NAVIO 3         // Tamanho dos navios
#define TAM_HABILIDADE 5    // Tamanho das matrizes de habilidade (5x5)
#define AGUA '0'            // Água
#define NAVIO '3'           // Navio
#define HABILIDADE '5'      // Área afetada por habilidade

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
 * Posiciona navio horizontal
 */
int posicionarNavioHorizontal(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], 
                             int linha, int coluna) {
    if (coluna + TAM_NAVIO > TAM_TABULEIRO) return 0;
    
    for (int c = coluna; c < coluna + TAM_NAVIO; c++) {
        if (tabuleiro[linha][c] == NAVIO) return 0;
    }
    
    for (int c = coluna; c < coluna + TAM_NAVIO; c++) {
        tabuleiro[linha][c] = NAVIO;
    }
    return 1;
}

/*
 * Posiciona navio vertical
 */
int posicionarNavioVertical(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO],
                           int linha, int coluna) {
    if (linha + TAM_NAVIO > TAM_TABULEIRO) return 0;
    
    for (int l = linha; l < linha + TAM_NAVIO; l++) {
        if (tabuleiro[l][coluna] == NAVIO) return 0;
    }
    
    for (int l = linha; l < linha + TAM_NAVIO; l++) {
        tabuleiro[l][coluna] = NAVIO;
    }
    return 1;
}

/*
 * Cria matriz de habilidade em formato de Cone
 */
void criarHabilidadeCone(char habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            // Forma um cone apontando para baixo
            if (j >= (TAM_HABILIDADE/2 - i/2) && 
                j <= (TAM_HABILIDADE/2 + i/2)) {
                habilidade[i][j] = '1';
            } else {
                habilidade[i][j] = '0';
            }
        }
    }
}

/*
 * Cria matriz de habilidade em formato de Cruz
 */
void criarHabilidadeCruz(char habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
    int centro = TAM_HABILIDADE/2;
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            // Forma uma cruz com centro no meio
            if (i == centro || j == centro) {
                habilidade[i][j] = '1';
            } else {
                habilidade[i][j] = '0';
            }
        }
    }
}

/*
 * Cria matriz de habilidade em formato de Octaedro (losango)
 */
void criarHabilidadeOctaedro(char habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
    int centro = TAM_HABILIDADE/2;
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            // Forma um losango
            int dist = abs(i - centro) + abs(j - centro);
            if (dist <= centro) {
                habilidade[i][j] = '1';
            } else {
                habilidade[i][j] = '0';
            }
        }
    }
}

/*
 * Aplica uma habilidade ao tabuleiro
 */
void aplicarHabilidade(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO],
                      char habilidade[TAM_HABILIDADE][TAM_HABILIDADE],
                      int linha_centro, int coluna_centro) {
    int offset = TAM_HABILIDADE/2;
    
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            int linha_tab = linha_centro - offset + i;
            int coluna_tab = coluna_centro - offset + j;
            
            // Verifica se está dentro do tabuleiro
            if (linha_tab >= 0 && linha_tab < TAM_TABULEIRO &&
                coluna_tab >= 0 && coluna_tab < TAM_TABULEIRO) {
                
                // Aplica apenas se for área afetada (1) e não for navio
                if (habilidade[i][j] == '1' && tabuleiro[linha_tab][coluna_tab] != NAVIO) {
                    tabuleiro[linha_tab][coluna_tab] = HABILIDADE;
                }
            }
        }
    }
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
    printf("\n\nLegenda: 0 = Agua | 3 = Navio | 5 = Habilidade\n");
}

int main() {
    char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];
    inicializarTabuleiro(tabuleiro);
    
    printf("=== BATALHA NAVAL - NIVEL MESTRE ===\n");
    printf("Posicionando navios e habilidades...\n");
    
    // Posiciona navios (coordenadas fixas)
    posicionarNavioHorizontal(tabuleiro, 2, 3);
    posicionarNavioVertical(tabuleiro, 5, 7);
    
    // Cria e aplica habilidades
    char cone[TAM_HABILIDADE][TAM_HABILIDADE];
    char cruz[TAM_HABILIDADE][TAM_HABILIDADE];
    char octaedro[TAM_HABILIDADE][TAM_HABILIDADE];
    
    criarHabilidadeCone(cone);
    criarHabilidadeCruz(cruz);
    criarHabilidadeOctaedro(octaedro);
    
    // Aplica habilidades no tabuleiro (coordenadas fixas)
    aplicarHabilidade(tabuleiro, cone, 1, 4);      // Cone no topo
    aplicarHabilidade(tabuleiro, cruz, 5, 5);      // Cruz no centro
    aplicarHabilidade(tabuleiro, octaedro, 8, 2);  // Octaedro na base
    
    exibirTabuleiro(tabuleiro);
    return 0;
}