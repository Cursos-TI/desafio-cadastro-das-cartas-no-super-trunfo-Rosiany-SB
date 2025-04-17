#include <stdio.h>


int main() {
    /*
    Programa para cadastrar e exibir duas cartas do jogo Super Trunfo de Países

    */

    // Variáveis para a Carta 1
    char estado1;               // Estado da carta 1 (A-H)
    char codigo1[4];            // Código da carta 1 (ex: A01)
    char cidade1[50];           // Nome da cidade da carta 1
    int populacao1;             // População da cidade 1
    float area1;                // Área em km² da cidade 1
    float pib1;                 // PIB da cidade 1
    int pontos_turisticos1;     // Número de pontos turísticos da cidade 1

    // Variáveis para a Carta 2
    char estado2;               // Estado da carta 2 (A-H)
    char codigo2[4];            // Código da carta 2 (ex: B02)
    char cidade2[50];           // Nome da cidade da carta 2
    int populacao2;             // População da cidade 2
    float area2;                // Área em km² da cidade 2
    float pib2;                 // PIB da cidade 2
    int pontos_turisticos2;     // Número de pontos turísticos da cidade 2

    
    printf("=== SUPER TRUNFO DE PAÍSES - CADASTRO DE CARTAS ===\n\n");

    // =============================================
    // LEITURA DOS DADOS DA CARTA 1
    // =============================================
    printf("--- Cadastro da Carta 1 ---\n");

    // Ler estado (A-H)
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    // Ler código (ex: A01)
    printf("Código da Carta: ", estado1);
    scanf("%s", codigo1);

    // Ler nome da cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1);

    // Ler população
    printf("População: ");
    scanf("%d", &populacao1);

    // Ler área em km²
    printf("Área (em km²): ");
    scanf("%f", &area1);

    // Ler PIB
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    // Ler número de pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    // =============================================
    // LEITURA DOS DADOS DA CARTA 2
    // =============================================
    printf("--- Cadastro da Carta 2 ---\n");

    // Ler estado (A-H)
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    // Ler código (ex: B02)
    printf("Código da Carta: ", estado2);
    scanf("%s", codigo2);

    // Ler nome da cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);

    // Ler população
    printf("População: ");
    scanf("%d", &populacao2);

    // Ler área em km²
    printf("Área (em km²): ");
    scanf("%f", &area2);

    // Ler PIB
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    // Ler número de pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

    // =============================================
    // EXIBIÇÃO DOS DADOS DAS CARTAS
    // =============================================
    printf("=== CARTAS CADASTRADAS ===\n\n");

    // Exibir Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n");

    // Exibir Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}